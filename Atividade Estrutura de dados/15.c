#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int i=0;
int maior,menor,numero;

printf("Digite numeros inteiros, para parar digite um numero negativo:");
scanf("%i",&i);




maior = i;
menor = i;
while(i>=0){
if (i > maior){
   maior = i;
}
else if (i < menor){
menor = i;
}
printf("Digite outro numero:");
scanf("%i",&i);
    
}
printf("O maior e:%i\n",maior);
printf("O menor e:%i",menor);
return 0;
}
