#include <stdio.h>
void imprimir(int *A,int n){
int i;

printf("Vetor:");

for (i=0;i<n;i++){
    printf("|%d|",A[i]);
}

}

void bubbleSort(int *A,int n){
int i,esq,dir,j;
for (i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(A[j]>A[j+1]){
        int t = A[i];
        A[j+1] = t;
        }
    }
}

}

int main (void){

int A[7]={23,4,67,-8,54,90,21};
imprimir(A,7);
bubbleSort(A,7);
imprimir(A,7);
return 0;
}
