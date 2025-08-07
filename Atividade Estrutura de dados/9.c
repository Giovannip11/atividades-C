#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
int i;
float n1,n2,resultado;
printf("MENU\n");
printf("Digite 1 para somar 2 numeros.\nDigite 2 para calcular a diferenca entre 2 numeros.\nDigite 3 para calcular o produto entre os dois numeros.\nDigite 4 para calcular a divisão entre os dois numeros.\n");
scanf("%i",&i);
switch(i){
case 1:
    printf("Digite o valor para n1:");
    scanf("%f",&n1);
    printf("Digite o valor para n2:");
    scanf("%f",&n2);
    resultado = n1 +n2;
    printf("O resultado eh:%1.f",resultado);
    break;
case 2:
    printf("Digite o valor para n1:");
    scanf("%f",&n1);
    printf("Digite o valor para n2:");
    scanf("%f",&n2);
    if (n1>n2){
        resultado=n1-n2;
        printf("O resultado eh:%1.f",resultado);
    }else if(n2>n1){
    resultado = n2-n1;
    printf("O resultado eh:%1.f",resultado);
    }
    else{printf("A diferenca e 0!!");
    }
    break
case 3:
    printf("Digite o valor para n1:");
    scanf("%f",&n1);
    printf("Digite o valor para n2:");
    scanf("%f",&n2);
    resultado=n1*n2;
    printf("O resultado eh:%1.f",resultado);
    break
case 4:
    printf("Digite o valor para n1:");
    scanf("%f",&n1);
    printf("Digite o valor para n2:");
    scanf("%f",&n2);
    resultado = n1/n2;
    printf("O resultado eh:%2.f",resultado);
    break

}
return 0;

}
