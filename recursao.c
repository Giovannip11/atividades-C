#include <stdio.h>
void imprime(int n){
    if(n>=0){
        
    printf("oi%d",n);
    imprime(n-1);
    
    }
    
}
void imprimecresc(int n){
    if(n>=0){
   
    imprimecresc(n-1);
    printf(" \noi%d",n);
    }
}
int main()
{
    int x;
    printf("Digite o valor de n:");
    scanf("%i",&x);
    imprime(x);
    imprimecresc(x);
    return 0;
}
