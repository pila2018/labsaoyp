#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL,"Russian"); 
	float crug, kvadrat,p=3.14;


	puts("Введите S шарика ");
	 scanf("%f, &crug");

	puts("Введите  S квадрата ");
	 scanf("%f, &kvadrat");
	
	if (crug>=2*p*kvadrat){
	puts("шарик влазит в квадрат ");
	}

	else
	{
	puts("квадат влязит в шврик" );
	}
}

