// uma função que copie uma lista L1 para uma lista L2 removendo os elementos repetidos(feito).
//Faça uma função que inverta a ordem dos elementos de uma lista.(feito)
// uma função que copie uma lista encadeada para um vetor.
//Faça uma função que verifique se duas listas encadeadas são iguais.
//Faça uma função que verifique se uma lista está contida na outra.
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

int main (void){
    Lista *lst1 = criaLista();
    insere_lista_fim(lst1,1);
    insere_lista_fim(lst1,2);
    insere_lista_fim(lst1,3);
    insere_lista_fim(lst1,3);
    insere_lista_fim(lst1,7);
    insere_lista_fim(lst1,6);

}
