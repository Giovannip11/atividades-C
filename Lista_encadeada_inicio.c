#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
}cel;

typedef struct cel* Lista;

Lista* cria_lista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li !=NULL){
        *li =NULL;
    }
    return li;
}
int main()
{
    Lista *lst;
    lst=cria_lista();
    cel c1 , c2, c3; 
    c1.conteudo = 1;
    c2.conteudo = 2;
    c3.conteudo = 3;
    
    c1.seg = &c2;
    c2.seg = &c3;
    c3.seg = NULL;
    
    *lst = &c1;
    
    cel *temp = *lst;
    
    while(temp !=NULL){
        printf("\t%d",temp->conteudo);
        temp = temp->seg;
    }
    
    
    return 0;
}
