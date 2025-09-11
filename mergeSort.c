#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void mergeSort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
    
}
void merge(int *V, int inicio, int meio, int fim) {
    int i = inicio, j = meio + 1, k = 0;
    int tamanho = fim - inicio + 1;
    int *temp = (int *)malloc(tamanho * sizeof(int));

    if (temp == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);
    }

    while (i <= meio && j <= fim) {
        if (V[i] <= V[j]) {
            temp[k++] = V[i++];
        } else {
            temp[k++] = V[j++];
        }
    }

    while (i <= meio) {
        temp[k++] = V[i++];
    }

    while (j <= fim) {
        temp[k++] = V[j++];
    }

    for (i = 0; i < tamanho; i++) {
        V[inicio + i] = temp[i];
    }

    free(temp);
}
    
int main()
{
    
 int V[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(V) / sizeof(V[0]);

    printf("Vetor original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    mergeSort(V, 0, n - 1);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
