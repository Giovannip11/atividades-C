#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int i,n;
printf("Digite um numero inteiro:");
scanf("%i",&n);
for(i=n;i>=0;i--){
    if(i % 2==0){
        printf("Os pares sao:%i\n",i);
    }
   
}

return 0;
}
