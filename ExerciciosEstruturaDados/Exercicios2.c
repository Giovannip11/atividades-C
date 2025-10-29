// uma função que copie uma lista L1 para uma lista L2 removendo os elementos repetidos.
//Faça uma função que inverta a ordem dos elementos de uma lista.
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
void removeRepetidos(Lista lst1){
    if(lst1==NULL){
        printf("Lista n existe");
    }
cel *temp = lst1;
    while(temp->prox!=NULL){


    }
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
