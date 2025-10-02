#include <stdio.h>
void printArray(int *vet,int size ){
int i;
    for(i=0;i<size;i++){
        printf("%d ",vet[i]);
    }

}

void bubble_sort(int *vet, int size){
    int i, j , aux;
    for (i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(vet[j]>vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }



        }
    }
}


int main (void){


    int vet[7]={5,7,2,4,1,3,6};
    int size = 7;

    printArray(vet,size);
    bubble_sort(vet,size);
    printf("\n");
    printArray(vet,size);

}
