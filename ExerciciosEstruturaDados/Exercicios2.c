// uma função que copie uma lista L1 para uma lista L2 removendo os elementos repetidos(feito).
//Faça uma função que inverta a ordem dos elementos de uma lista.(feito)
// uma função que copie uma lista encadeada para um vetor(feito).
//Faça uma função que verifique se duas listas encadeadas são iguais(feito).
//Faça uma função que verifique se uma lista está contida na outra(feito).
#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int cont;
    struct cel *prox;
}cel;

typedef struct cel* Lista;

Lista* criaLista(){
    Lista *li=(Lista*)malloc(sizeof(Lista));
    if(li!=NULL){
        *li=NULL;
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
void removeRepetidos(Lista lst1) {
    if (lst1 == NULL) return;

    cel *atual = lst1;
    while (atual != NULL && atual->prox != NULL) {
        cel *anterior = atual;
        cel *comparador = atual->prox;

        while (comparador != NULL) {
            if (comparador->cont == atual->cont) {
                anterior->prox = comparador->prox;
                free(comparador);
                comparador = anterior->prox;
            } else {
                anterior = comparador;
                comparador = comparador->prox;
            }
        }
        atual = atual->prox;
    }
}
void inverteOrdem(Lista lst1){
    if(lst1 == NULL){
        printf("A lista n existe");
    }
    cel *anterior = NULL;
    cel *atual = lst1;
    cel *proximo = NULL;

    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }

    lst1 = anterior;
}
int listaVetor(Lista lst1, int tamanho){
    if(lst1==NULL){
        printf("A lista n existe");
        tamanho=0;
        return NULL;
    }
    int tam =0;
    cel *temp = lst1;
    while(temp==NULL){
        tam++;
        temp=temp->prox;
    }
    int *vetor =(int*)malloc(sizeof(*vetor));
    if(vetor==NULL){
        return NULL;
    }
    temp=lst1;
    for(int i=0;i<tam;i++){
        vetor[i]=temp->cont;
        temp=temp->prox;
    }
    tamanho = tam;
    return *vetor;
}
int comparaLista(Lista lst1,Lista lst2){
    if(lst1==NULL){
        printf("N existe lista 1");
    }
    if(lst2==NULL){
        printf("N existe lista 2");
    }
    cel *aux1= lst1;
    cel *aux2= lst2;
    while(aux2 !=NULL || aux1 !=NULL){
        if(aux1 ->cont != aux2->cont){
            return 0;
        }
        aux1=aux1->prox;
        aux2=aux2->prox;
    }
    if(aux1!=NULL || aux2!=NULL){
        return 0;
    }
    return 1;
}
int estaContida(Lista lst1, Lista lst2){
    if(lst1==NULL || lst2==NULL){
        return -1;
    }
    cel *inicio1=lst1;
    cel *inicio2=lst2;
    while(inicio1!=NULL){
        cel *a =inicio1;
        cel *b =inicio2;
        while(a !=NULL && b !=NULL && a->cont==b->cont){
            a=a->prox;
            b=b->prox;
        }
        if(b==NULL){
            return 1;
        }
        inicio1=inicio1->prox;
    }
    return 0;

}
int main (void){
    Lista *lst1 = criaLista();
    Lista *lst2 = criaLista();
    insere_lista_fim(lst1,1);
    insere_lista_fim(lst1,2);
    insere_lista_fim(lst1,3);
    insere_lista_fim(lst1,3);
    insere_lista_fim(lst1,7);
    insere_lista_fim(lst1,6);

    insere_lista_fim(lst2,1);
    insere_lista_fim(lst2,2);
    insere_lista_fim(lst2,3);
    insere_lista_fim(lst2,3);
    insere_lista_fim(lst2,7);
    insere_lista_fim(lst2,6);

}
