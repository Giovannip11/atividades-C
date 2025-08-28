
#include <stdio.h>
#include <math.h>

int busca_binaria(int n,int *A,int t){
int posicao;
int meio;
int inicio=0;
int fim =t-1;
meio= inicio +(fim - inicio)/2;

while(inicio<=fim){
    meio= inicio +(fim - inicio)/2;
    if(A[meio]==n){
        return meio;
    }
    if(A[meio]<n){
        inicio = meio +1;

    }
    else
        fim=meio-1;
}
return -1;
}
int main (void){
    int A[7]={-8,4,21,23,54,67,90};
    int x;
    int resultado;
    int t=7;

    printf("Digite o numero que deseja encontrar:");
    scanf("%i",&x);
    resultado=busca_binaria(x,A,t);
    printf("%d",resultado);

}
