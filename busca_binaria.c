#include <stdio.h>
#include <math.h>
int busca_binaria(int *vet,int n,int t){
    int i=0;
    int fim= t;
    int meio;
    while(i<=fim){
    meio = i + (fim - i)/2;
    if(vet[meio]==n) {
        return meio;
    }   
    if (vet[meio]<n){
        i = meio +1;
    }
    if (vet[meio]>n){
        fim = meio -1;
    }
    }
    return -1;
}
int main()
{
    int t = 7;
    int n;
    int vet[7]= {1,2,3,4,5,6,7};
    printf("Digite o numero que deseja achar:");
    scanf("%d",&n);
    int resultado = busca_binaria(vet,n,t);
    if (resultado != -1){
        printf("O resultado eh posicao:%d",resultado);
    }else{
        printf("Numero n encontrado!");
    }
    
    
    return 0;
}
