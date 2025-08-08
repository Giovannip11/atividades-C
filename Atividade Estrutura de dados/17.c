int main()
{
int n[6];
int i;

for(i=0;i<6;i++){
    printf("Digite o valor para a posicao %i:",i);
    scanf("%d",&n[i]);
}
printf("Array:");
for(i=0;i<6;i++){
    printf("%i,",n[i]);
} 

return 0;
}
