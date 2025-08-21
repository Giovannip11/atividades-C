#include <stdio.h>
int fibonacci(int n){
   if (n==0){
       return 0;
   }
   else if (n==1){
       return 1;
   }
   else{
       return fibonacci(n-1) +  fibonacci(n-2);
   }
}
int main()
{
    int i;
    int x;
    printf("Digite um numero para N:");
    scanf("%i",&x);
    printf("Fibonacci até N será:");
    for (i=0;i<x;i++){
        printf("%d ",fibonacci(i));
    }

    return 0;
}
