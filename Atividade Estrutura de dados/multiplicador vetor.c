
#include <stdio.h>
void imprime(int *m , int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d\t",m[i]);
    }
}

void multiplicar(int *m,int n){
    int i;
    int l;
    for (i>0;i<n;i++){
        l=m[i]* n;
        printf("%d\t",l);
    }
}
int main()
{
    int j;
    int vet[5]={1,2,3,4,5};
    printf("Digite um número de 1 a 10:");
    scanf("%d",&j);
    imprime(vet,5);
    multiplicar(vet,j);
    imprime(vet,5);
	
	return 0;

}
