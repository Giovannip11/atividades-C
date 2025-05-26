//4)Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e imprime no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL, "Portuguese");
double f,c;
printf("Digite o valor da temperatura em fahrenheit:");
scanf("%lf",&f);
c=(f-32.0)*(5.0/9.0);
printf("A temperatura em celsius é:%.2lf",c);



return 0;
}
