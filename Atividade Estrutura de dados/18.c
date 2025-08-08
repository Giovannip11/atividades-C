#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int A[10];
int i;
for (i=0;i<10;i++){
    printf("Digite o valor para a posicao %i:",i);
    scanf("%d",&A[i]);
}
printf("Os valores pares sao:");
for (i=0;i<10;i++){
    if(A[i]%2==0){
        printf("%d,",A[i]);
    }
}

return 0;
}
