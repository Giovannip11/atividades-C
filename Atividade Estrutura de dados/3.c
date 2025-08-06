#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float n,quadrado;
printf("Digite um numero real:");
scanf("%f",&n);
quadrado = pow(n,2);

printf("O quadrado do seu numero eh: %.2f",quadrado);
}
