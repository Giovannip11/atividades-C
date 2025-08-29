#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void imprimir(int *A, int n){
    int i;
    printf("\nVetor:");
    for (i=0;i<n;i++){
        printf("|%d|",A[i]);
    }
}
void sort(int *A,int n){
    int i,j,menor,aux;
    for(i=0;i<n;i++){
        menor = i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[menor]){
                menor=j;
            }
        }
    if(i !=menor){
        aux= A[i];
        A[i]=A[menor];
        A[menor]=aux;
    }
    }
    
    
}

int main()
{
     int A[7]={23,4,67,-8,54,90,21};
     imprimir(A,7);
     sort(A,7);
     imprimir(A,7);

    return 0;
}
