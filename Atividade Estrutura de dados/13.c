#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
int i=10;
while(i>0){
    printf("%i\n",i);
    sleep(1);
    i--;
}
printf("FIM!");

return 0;
}
