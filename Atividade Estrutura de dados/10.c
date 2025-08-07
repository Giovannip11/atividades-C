#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
int idade,tempo;
printf("Digite a idade:");
scanf("%i",&idade);
printf("Digite o tempo de servico:");
scanf("%i",&tempo);

if (idade>=65){
    printf("Eh possivel se aposentar");
}else if(tempo>=30){
printf("Eh possivel se aposentar");
}
else if(idade>=60 && tempo >=25){
    printf("Eh possivel se aposentar");
}
else{
    printf("Nao eh possivel se aposentar");
}
return 0;
}
