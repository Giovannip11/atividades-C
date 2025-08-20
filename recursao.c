#include <stdio.h>
void imprime(int n){
    if(n>=0){
        
    printf("oi%d",n);
    imprime(n-1);
    
    }
    
}
int main()
{
    int x;
    printf("Digite o valor de n:");
    scanf("%i",&x);
    imprime(x);

    return 0;
}
