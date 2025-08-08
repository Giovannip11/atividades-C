
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int soma;
int i=0;
int A[6]= {1,0,5,-2,-5,7};
soma = A[0] + A[1] + A[5];
printf("A soma eh:%i\n",soma);
A[4]=100;
printf("Novo array:");
for(i;i<6;i++){
    printf("%d,",A[i]);
} 

return 0;
}
