#include <stdio.h>
void imprimir(int *A,int n){
int i;

printf("Vetor:");

for (i=0;i<n;i++){
    printf("|%d|",A[i]);
}
}
void bubbleSort(int *A,int n){
    int i,troca,aux;
    do{
        troca=0;
        for(i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                aux=A[i];
                A[i]=A[i+1];
                A[i+1]=aux;
                troca=1;
            }
        }
    }while(troca);
    
}

int main()
{
    int A[7]={23,4,67,-8,54,90,21};
    imprimir(A,7);
    bubbleSort(A,7);
    imprimir(A,7);

    return 0;
}
