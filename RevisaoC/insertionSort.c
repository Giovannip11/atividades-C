#include <stdio.h>
void printArray(int *vet,int size){
    int i;
    for (i=0;i<size;i++){
        printf("%d ",vet[i]);
    }

}
void insertSort(int *vet,int size){
int i,j,aux;

for (i=1;i<size;i++){
    aux = vet[i];
    j=i-1;
    while(j>=0 && vet[j]>aux){
        vet[j+1]=vet[j];
        j=j-1;
    }
    vet[j+1]=aux;

    }
}




int main (void){
int vet[7]= {5,2,1,3,6,7,4};
int size=7;

printArray(vet,size);
insertSort(vet,size);
printf("\n");
printArray(vet,size);
}
