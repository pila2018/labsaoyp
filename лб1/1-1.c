#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
setlocale(LC_ALL,"Russian");
int x,res;
scanf("%d",&x);
res=4*x*x*x*x*x*x*x*x;
printf("res = %d\n",res);
return 0;
}

