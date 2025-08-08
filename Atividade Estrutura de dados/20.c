#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    
    int linha[n][n];  

   
    for (int i = 0; i < n; i++) {
        linha[i][0] = 1; 
        linha[i][i] = 1; 

        for (int j = 1; j < i; j++) {
            linha[i][j] = linha[i-1][j-1] + linha[i-1][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", linha[i][j]);
        }
        printf("\n");
    }

    return 0;
}
