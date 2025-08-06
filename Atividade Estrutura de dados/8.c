#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
int n1,n2,dif;
printf("Digite o valor de n1:");
scanf("%i",&n1);
printf("Digite o valor de n2:");
scanf("%i",&n2);
if(n1>n2){
    printf("N1 e maior que N2:%i\n",n1);
    dif = n1-n2;
    printf("A diferenca eh: %i",dif);
}
else if(n2>n1){
    printf("N2 e maior que N1:%i\n",n2);
    dif = n2-n1;
    printf("A diferenca eh: %i",dif);
}else{
    printf("N1 e N2 sao iguais\n");
    printf("Diferenca igual a 0");
}


}
