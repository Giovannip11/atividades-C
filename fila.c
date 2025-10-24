#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
    int cont;
    struct elemento *prox;
}Elem;

typedef struct fila{
    int quantidade;
    int max;
    struct elemento *inicio;
    struct elemento *fim;
}Fila

Fila* criaFila(){
    Fila* fi = (Fila*)malloc(sizeof(Fila));
    if(fi !=NULL){
        fi->quantidade=0;
        fi->max=5;
        fi->inicio=NULL;
        fi->fim=NULL;
    }
    return fi;
    
}

int enqueue(Fila* fi,int x){
    if(fi==NULL || fi->quantidade>=fi->max){
        return 0;
    }
    Elem *no = (Elem*)malloc(sizeof(Elem));
    if(mo = NULL){
        return 0;
    }
    no->cont = x;
    no->prox=NULL;
    
    fi->fim->prox=no;
    fi->fim = no;
}
fi->quantidade;
return 1;

int main(void){
    
    
    
    return 0;
}
