#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void mergeSort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
    
}
void merge(int *V,int direita,int esquerda ){
    int i,j,k;

    
    
   
    int temp=(int *)malloc(tamanho*sizeof(int));
}
    
int main()
{
    

    return 0;
}
