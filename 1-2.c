
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

void main(void) { 

	float x,y,z,s,a,b,c,d; //объ€влении переменной
	
	scanf("%f \n %f \n %f", &x, &y, &z); //ввод пременной  с клавиатуры 
	
	
	a= pow(2.0,-x); //вычисление 
	b= sqrt(x+pow(fabs(y),(1.0/4.0)));
	d= exp(x-(1.0/sin(z)));
	c= pow(d,1.0/3.0); 
	
	s= a*b*c; 
	
	printf("\n Otvet = %f",s); //ввывод переменной  на экран 
	return 0;
}


