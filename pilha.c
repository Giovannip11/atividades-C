#include <stdio.h>
#include <stdlib.h>
// add imprimir, acho q n adicionei...
typedef struct cel{
    int cont;
    struct cel *prox;
}cel;

typedef struct cel* Pilha;

Pilha* criarPilha(){
    Pilha *pi = (Pilha*)malloc(sizeof(Pilha));
    if(pi!=NULL){
        *pi=NULL;
    }
    return pi; 
    
}
Pilha push(Pilha topo, int x){
    cel* n = (cel*)malloc(sizeof(cel));
    if(n == NULL){return 0;}
    
    n->cont = x;
    n->prox = topo;
    
    
    return n;
}

Pilha pop (Pilha topo){
    if(top == NULL){return 0;}
    
    
}

int main(void){
    
    
}
