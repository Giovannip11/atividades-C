#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int i;
int A[10];
int B[10];
for(i=0;i<10;i++){
    printf("Digite o valor para a posicao %i do vetor A:",i);
    scanf("%d",&A[i]);
}
for(i=0;i<10;i++){
    printf("Digite o valor para a posicao %i do vetor B:",i);
    scanf("%d",&B[i]);
}
for (i=0;i<10;i++){
    if(A[i]==B[i]){
        printf("%d,",A[i]);
    }
}

return 0;
}
