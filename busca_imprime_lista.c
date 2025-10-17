#include <stdio.h>
#include<stdlib.h>

//Metodo buscar, imprimir;
//codigo pra liberar lista de tras pra frente.

typedef struct cel{
  int conteudo;
  struct cel *seg;
}cel;

typedef struct cel* Lista;


Lista* cria_lista(){
  Lista *li = (Lista*) malloc(sizeof(Lista));
  if(li != NULL){
    *li=NULL;
  }
  return li;
}

int insere_lista_fim(Lista* lista, int x){
  if(lista==NULL) {return 0;}
  cel* aux = (cel*) malloc(sizeof(cel));
  if(aux==NULL){return 0;}
  aux->conteudo = x;
  aux->seg = NULL;
  if((*lista)==NULL){ *lista = aux;}
  else{
    cel *temp;
    temp = *lista;
    while(temp->seg!= NULL){ //caminha até o utlimo elemento
      temp= temp->seg;
    }
    temp->seg = aux;
  }
  return 1;
}
void imprime_lista(Lista *lista)
{
    Lista aux= *lista ;
    
     while(aux != NULL){
        printf("%d ", aux -> conteudo);
        aux = aux -> seg;
     }
     printf("\n");
 
}
void busca_lista(Lista *lista,int valor)
{
    Lista aux = *lista;
    while(aux !=NULL){
        if(aux->conteudo==valor){
            printf("%d",valor);
        }
        aux = aux  -> seg;
    }
    
}

void libera_lista(Lista *lista){
    if(lista != NULL){
        cel * aux;
        while(*lista != NULL){ //Apagando todos os nós um a um;
            aux = *lista;
            *lista = (*lista)-> seg; //*lista = aux->seg;
            free(aux);
        }
        free(lista);//Apaga a lista 
    }
}
int remove_lista(Lista* lista, int x){
    if(lista==NULL){
        return 0;
    }
    if(*lista==NULL){
        return 0;
    }
    
    cel *ant, *aux = *lista;
    while (aux != NULL && aux->conteudo!=x){
        ant = aux;
        aux = aux->seg;
    }
    if(aux == NULL){
        return 0;
    }
    if(aux==*lista){
        *lista = aux->seg;
    }else{
        ant->seg = aux -> seg;
    }
    free(aux);
    return 1;
    
}

int main(void) {
  Lista *lst;
  int n,x;
  lst = cria_lista();
  insere_lista_fim(lst, 1);
  insere_lista_fim(lst, 2);
  insere_lista_fim(lst, 3);
  insere_lista_fim(lst, 4);
  insere_lista_fim(lst, 5);
  imprime_lista(lst);

  imprime_lista(lst);
  
  printf("Digite o valor a ser procurado:");
  scanf("%d",&n);
  busca_lista(lst,n);
  printf("\nDigite o valor a ser removido:");
  scanf("%d",&x);
  remove_lista(lst,x);
  
  imprime_lista(lst);

  return 0;
}
