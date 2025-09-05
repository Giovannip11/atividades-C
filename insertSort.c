#include <stdio.h>
void imprimir(int *A,int n){
int i;

printf("Vetor:");

for (i=0;i<n;i++){
    printf("|%d|",A[i]);
}
}
void insertionSort(int *A,int n){
    int i,aux,j;
    for(i=1;i<n;i++){
        aux = A[i];
        j=i-1;
        while(j>=0 && A[j]>aux){
        A[j+1]=A[j];
        j = j-1;
    }
    A[j+1] = aux;
    }
}

int main(void){

    int A[7]={23,4,67,-8,54,90,21};
    imprimir(A,7);
    insertionSort(A,7);
    imprimir(A,7);



return 0;
}






return 0;    
}
