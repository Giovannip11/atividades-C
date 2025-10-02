#include <stdio.h>
#include <math.h>

void printArray(int *vet , int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d ",vet[i]);
    }

}
void merge(int *vet,int inicio, int meio, int fim){
    int *temp, p1,p2,tamanho,i,j,k;

    int fim1= 0;
    int fim2= 0;
    int size = fim-inicio+1;
}
void mergeSort(int *vet, int inicio,int fim){
    int meio;
    if(inicio<fim){
        meio = floor((inicio+fim)/2);
        mergeSort(vet,inicio,meio);
        mergeSort(vet,meio+1,fim);
        merge(vet,inicio,meio,fim);
    }

}

int main (void){

    int vet[7]= {4,2,7,1,5,6,3};
    int size = 7;
    printArray(vet,size);


}