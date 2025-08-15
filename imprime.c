
#include <stdio.h>
void imprime(int *m , int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d\t",m[i]);
    }
}
int main()
{
    int vet[5]={1,2,3,4,5};
    imprime(vet,5);
	
	return 0;

}
