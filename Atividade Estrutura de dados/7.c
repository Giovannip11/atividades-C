#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
int n,r;
printf("Digite um numero inteiro: ");
scanf("%i",&n);
r=n%2;

if (r==0){
    printf("O numero eh par!!");
}
else{
    printf("O numero eh impar!!");
}
}
