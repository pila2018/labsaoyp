
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main(void) { 

	float x,y,z,s,a,b,c,d; 
	
	scanf("%f \n %f \n %f", &x, &y, &z);
	
	
	a= pow(2.0,-x);
	b= sqrt(x+pow(fabs(y),(1.0/4.0)));
	d= exp(x-(1.0/sin(z)));
	c= pow(d,1.0/3.0); 
	
	s= a*b*c; 
	
	printf("\n Otvet = %f",s); 
	return 0;
}


