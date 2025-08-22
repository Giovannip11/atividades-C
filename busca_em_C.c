//Terminar em casa...
#include <stdio.h>

int achar(int n,int *A,int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        if(n==A[i])
        return i;

    }
    return -1;
}
int acharORD(int m,int *B, int tamanho){
    int i;
    for (i=0;i<tamanho;i++){
        if(m==B[i]){
            return i;
        }
        else if(m<B[i]){
            return -1;
    
        }
        
    }
    return-1;
    
}
int busca_binária(int v,int *B,int tamanho){
    int i;
    int posicaoI;
    posicaoI= tamanho / 2;
    if (B[posicaoI]==v){
        return v;
    }
    while(B[posicaoI]>v){
        i--;
        if(B[posicaoI]==v){
            return v;
        }
    }
    while (B[posicaoI]<v){
        i++;
        if (B[posicaoI]==v){
            return v;
        }
    }
    return -1;
}

int main()
{

    int A[7]={23,4,67,-8,54,90,21};
    int B[7]={-8,4,21,23,54,67,90};
    int x;
    int resultado;
    int resultado2;
    int resultado3;
    int tamanho = 7;
    printf("Digite o numero que deseja encontrar:");
    scanf("%i",&x);
    resultado=achar(x,A,tamanho);
    printf("%d\n",resultado);
    resultado2=acharORD(x,B,tamanho);
    printf("%d\n",resultado2);
    resultado3=busca_binária(x,B,tamanho);
    printf("%d\n",resultado3);
    
    
   

    return 0;
}
