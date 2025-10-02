#include <stdio.h>
#include <math.h>

void imprime(int *vet, int t) {
    for (int i = 0; i < t; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}
void selection_sort(int *vet,int t){
int i,menor,aux;
for (i=0;i<t;i++){
    menor = i;
    for (int j=i+1;j<t;j++){
        if(vet[j]<vet[menor]){
            menor = j;
        }
    }
    if (i!=menor){
        aux=vet[i];
        vet[i]=vet[menor];
        vet[menor]=aux;

    }
}


}


int main (void){
int vet[7]={5,7,2,4,1,3,6};
int t = 7;

imprime(vet,t);
selection_sort(vet,t);
imprime(vet,t); 



return 0;
}
