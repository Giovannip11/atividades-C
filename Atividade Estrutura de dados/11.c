#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
int i =0;
int n = 1;
while(i<5){
    if(n%3==0){
        printf("O numero %i eh multiplo de 3.\n",n);
        i++;
    }
    n++;
}
return 0;
}
