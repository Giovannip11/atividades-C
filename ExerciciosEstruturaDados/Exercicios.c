//Faça uma função para concatenar duas listas em uma terceira lista que deve ser retornada pela função(feito).
//Faça uma função para remover os n (numero recebido como parâmetro) primeiros elementos de uma lista(feito).
//Faça uma função apare buscar o maior elemento de uma lista e a posição dele(feito).
//Faça uma função que conte quantos números pares existem em uma lista(feito).
//Faça uma função que retorne a média dos valores contidos em uma lista(feito).
#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int cont;
    struct cel *prox;
}cel;

typedef struct cel* Lista;

Lista* CriaLista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li!=NULL){
        *li = NULL;
    }
    return li;
}
int insere_lista_fim(Lista *lista, int x){
    if(lista == NULL){
        return 0;
    }
    cel* aux = (cel*)malloc(sizeof(cel));
    if(aux ==NULL){return 0;}

    aux->cont =x;
    aux->prox =NULL;

    if((*lista)==NULL){//inserindo o primeiro

        *lista =aux;
    }else{
        cel *temp;
        temp = *lista;
        while(temp->prox !=NULL){
            temp = temp-> prox;
        }
        temp->prox =aux;
    }
    return 1;
}
void imprimeLista(Lista *li){
    if(li == NULL) return;

    cel *no = *li;
    while(no != NULL){
        printf("%d -> ", no->cont);
        no = no->prox;
    }
    printf("NULL\n");
}

Lista concatenacao(Lista lst1,Lista lst2){
    if(lst1==NULL){return lst2;}

    cel*temp=lst1;
    while(temp->prox!=NULL){
        temp=temp->prox;
    }
    temp->prox=lst2;

    return lst1;
}
int eliminar(Lista lst3,int x){
    if(lst3==NULL){
           return 0;
       }

       cel *ant, *aux = lst3;
       while (aux != NULL && aux->cont!=x){
           ant = aux;
           aux = aux->prox;
       }
       if(aux == NULL){
           return 0;
       }
       if(aux==lst3){
           lst3 = aux->prox;
       }else{
           ant->prox = aux -> prox;
       }
       free(aux);
       return 1;
}

int maiorLista(Lista lst3){
    if(lst3==NULL){return -1;}
    int maior = lst3->cont;
    cel *temp= lst3->prox;

    while(temp!=NULL){
        if(temp->cont>maior){
            maior = temp->cont;
        }
        temp = temp->prox;
    }

    return maior;
}
void pares(Lista lst3){
    if(lst3==NULL){
    printf("Não possui lista")
    ;}
    cel *aux= lst3;
    printf("Pares:");
    while(aux!=NULL ){
        if(aux->cont % 2==0){
            printf("%d,",aux->cont);
        }
        aux=aux->prox;
    }
    printf("\n");
}
float media(Lista lst3){
    if(lst3==NULL){return -1;}
    float soma = 0;
    int cont = 0;
    cel *aux=lst3;

    while(aux!=NULL){
        soma += aux->cont;
        cont++;
        aux = aux->prox;
    }
    if(cont==0){
        return -1;
    }
return soma /cont;
}


int main(void){
Lista *lst1 = CriaLista();
Lista *lst2= CriaLista();

insere_lista_fim(lst1,10);
insere_lista_fim(lst1,9);
insere_lista_fim(lst1,8);

insere_lista_fim(lst2,7);
insere_lista_fim(lst2,6);
insere_lista_fim(lst2,5);

printf("Lista 1:");
imprimeLista(lst1);

printf("Lista 2:");
imprimeLista(lst2);

Lista *lst3 = CriaLista();
*lst3 = concatenacao(*lst1,*lst2);

printf("Lista concatenada:");

imprimeLista(lst3);
eliminar(*lst3,8);
imprimeLista(lst3);

int maior = maiorLista(*lst3);
printf("O maior da lista 3 é:%d\n",maior);
pares(*lst3);
float m = media(*lst3);
printf("A media da lista 3 é:%2f\n",m);

return 0;


}
