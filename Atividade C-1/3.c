//3) Fazer um programa que solicita um n�mero decimal e imprime o correspondente em hexa e octal.
#include <stdio.h>
#include <math.h>

int main (void){
int numero;
int i;
int resultado;
printf("Digite um numero decimal:");
scanf("%i", &numero);

printf("%x\n",numero);
printf("%o",numero);
return 0;
}
