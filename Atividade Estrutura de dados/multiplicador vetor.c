#include <stdio.h>
void imprime(int *m,int n){
int i;
for(i=0;i<n;i++){
    printf("%d\t",m[i]);
}
}
void multiplicar(int *m,int num,int tamanho){
int i;
int x;
for (i=0;i<tamanho;i++){
    m[i]=m[i]*num;

}

}

int main(void){
int j;
int vet[5]={1,2,3,4,5};
printf("Digite um número de 1 a 10:");
scanf("%d",&j);
imprime(vet,5);
multiplicar(vet,j,5);
imprime(vet,5);

}
