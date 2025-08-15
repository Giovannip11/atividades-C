#include <stdio.h>
void incrementa(int n) {
	n=n+1;
	printf("Dentro da funcao: x = %d\n",n);
}
void incrementa_referencia(int *n) {
	*n = *n +1;
	printf("Dentro da funcao: x = %d\n",*n);
}
int main()
{
	int x =5;
	printf("Antes da funcao:x = %d\n",x);

	incrementa(x);
	incrementa_referencia(&x);
	printf("Depois da funcao: x = %d\n",x);
	return 0;

}
