// Fazer o bubbleSort entender o algoritmo;
void bubbleSort(int *A,int n){
    int i,maior,j,esq,menor;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(A[i]<A[j]){
                maior = A[j];
                menor=A[i];
            }
            if (menor > maior){
                menor=maior;
            }
            
        }
        
    }
}
