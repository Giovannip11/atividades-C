//terminar essa porra que ta tudo errado
#include <stdio.h>
void imprimir(int *A,int n){
int i;

printf("Vetor:");

for (i=0;i<n;i++){
    printf("|%d|",A[i]);
}
}
void insertionSort(int *A,int n){
    int i,troca,aux;
   while(i<n){
       for(i=0;i<n;i++){
       if(A[i+1]>A[i+2]){
           aux=A[i+2];
           A[i+2]=A[i];
           A[i]=aux;
           
       }
   }
 }
}

int main(void){
    
    int A[7]={23,4,67,-8,54,90,21};
    imprimir(A,7);
    insertionSort(A,7);
    imprimir(A,7);



return 0;    
}
