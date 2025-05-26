
//1)Fazer um programa em C que pergunta um valor em metros e imprime o
//correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL, "Portuguese");
float M,c,d,m;
char escolha;
printf("Digite um valor metros: ");
scanf("%f",& M);
printf("Agora digite para que unidade quer converter:\nd para decimetro\nc para centimetros \nm para milimetros\n");
scanf(" %c", &escolha);

if (escolha=='d'){
    d=M*10;
    printf("%.2f decimetros:" ,d);
}
else if (escolha=='c'){
    c=M*100;
    printf("%.2f centimetros:", c);
}
else if (escolha=='m'){
    m=M*1000;
    printf("%.2f milimetros:",m);
}
else{
    printf("Digite um valor válido!!");
}
 return 0;
}
