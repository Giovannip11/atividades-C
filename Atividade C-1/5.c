//5)
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL, "Portuguese");
int n1;
int n2;
int soma;
int q1;
int q2;
int somaQ;
int dif;
int modulo;
float seno;
float produto;
printf("Digite um n�mero inteiro:");
scanf("%i",&n1);
printf("Digite um n�mero inteiro:");
scanf("%i",&n2);
soma=n1+n2;
printf("A soma �:%i\n",soma);
produto= n1 * (n2*n2);
printf("O produto �:%2.lf\n",produto);
q1=n1 * n1;
q2= n2 * n2;
printf("O quadrado do primeiro n�mero �:%i\n",q1);
somaQ =  q1 + q2;
printf("A raiz quadrada da soma dos quadrados �:sqrt(%2d)\n",somaQ);
dif = n1- n2;
seno = sin(dif);
printf("Valor do seno da diferen�a �:%6f\n",seno);
modulo = abs(n1);
printf("Modulo de n1 �:%i\n",n1);
return 0;
}
