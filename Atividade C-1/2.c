//2)Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
#include <stdio.h>
#include <math.h>
int main (void){
int i;
int resultado;

for(i=1;i>=1  && i<=9;i++){
resultado=i*9;

printf("%i\n", resultado);
}

return 0;
}
