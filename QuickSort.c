#include <stdio.h>
#include<math.h>

void printArray(int *vet, int t){
    int i;
    for (i=0;i<t;i++){
        printf("%d ",vet[i]);
    }
   
}
void QuickSort(int *vet,int inicio,int fim){
    int pivot;
    if (fim > pivot){
        pivot =  particiona(vet,inicio,fim);
        QuickSort(vet,inicio,pivot-1);
        QuickSort(vet,pivot+1,fim);
    }
    
}
int particiona(int *vet, int inicio, int final){
    int esq, dir,pivot,aux;
    esq = inicio;
    dir = final; 
    pivot = vet[inicio];
    while(esq<dir){
        while (vet[esq]<=final && vet[esq]<= pivot){
            esq++;
        
        }
            
        while(vet[dir]>=0 && vet[dir] > pivot){
            dir--;
            
       
        }
        
        if(esq<dir){
         aux = vet[esq];
         vet[esq]= vet[dir];
         vet[dir]=aux;
        }
        
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivot;

    return dir;
    
    
}

int main()
{
    int t = 7;
    int vet[7] = {2,3,6,7,1,5,4};
    
    printArray(vet,t);
    QuickSort(vet,0,t-1);
    printf("\n");
    printArray(vet,t);
    
    
    
    return 0;
}
