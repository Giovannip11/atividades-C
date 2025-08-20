#include <stdio.h>

int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        
        return n * fatorial(n-1);
    }
    
    
}
int main()
{
    int x;
    printf("Digite o valor de n para fatorial:");
    scanf("%i",&x);
    fatorial(x);
    int resultado = fatorial(x);
    printf("O fatorial eh:%d",resultado);
    return 0;
}
