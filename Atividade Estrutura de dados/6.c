#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
int n1,n2;
printf("Digite o n1: ");
scanf("%i",&n1);
printf("Digite o n2: ");
scanf("%i",&n2);
if(n1>n2){
    printf("N1 e maior que N2!!");
}
else if(n2>n1){
    printf("N2 e maior que N1!!");
}else{
    printf("N1 e N2 sao iguais");
}

}
