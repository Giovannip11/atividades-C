#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int cont;
    struct cel *prox;
}cel;

typedef struct fila{
    int quantidade;
    int max;
    struct cel *inicio;
    struct cel *fim;
}Fila;
Fila* criaFila(){
    Fila* fi=(Fila*)malloc(sizeof(Fila));
    if(fi==NULL){
        fi->quantidade=0;
        fi->max=5;
        fi->inicio=NULL;
        fi->fim==NULL;
    }
    return fi;
}

int enqueue(Fila* fi, int x){
    if(fi==NULL || fi->quantidade>=fi->max){
        return 0;
    }
    cel *no=(cel*)malloc(sizeof(cel));
    if(no==NULL){
        return 0;
    }
    no->cont=x;
    no->prox=NULL;
    if(fi->inicio==NULL){
        fi->inicio=no;
    }else{
        fi->fim->prox=no;
    }
    fi->fim=no;
    fi->quantidade++;
    return 1;

}

int dequeue(Fila* fi){
    if(fi==NULL || fi->quantidade>=fi->max){
        return -1;
    }
    cel *Noremovido = fi->inicio;
    int DadoRemovido = Noremovido->cont;

    fi->inicio = Noremovido->prox;

    if (fi->inicio==NULL){
        fi->fim=NULL;
    }
    free(Noremovido);

    fi->quantidade--;
    return DadoRemovido;
}

void showFila(Fila* fi){
    if(fi==NULL || fi->quantidade>=fi->max){
        printf("Fila vazia...");
    }
    cel *temp = fi->inicio;
    printf("Fila:");
    while(temp !=NULL){
        printf("%d",temp->cont);

        temp=temp->prox;
    }
    if(temp !=NULL){
        printf("->");
    }
    printf("\n");
}
void verificarFilaVazia(Fila* fi){
    if(fi==NULL || fi->quantidade>=fi->max){
        printf("Fila vazia");
    }
}
int verificarFilaCheia(Fila* fi){
    if(fi==NULL){
        return 0;
    }
    if(fi->quantidade >= fi->max){
        return 1;
    }else{
        return 0;
    }
}

int main(void){


}
