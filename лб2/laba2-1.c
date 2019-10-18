#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
setlocale(LC_ALL,"Russian"); 
float a, b, c; int res;

puts("a:"); scanf("%f",&a);	
puts("b:"); scanf("%f",&b);	
puts("c:"); scanf("%f",&c);

if (a==b || b==c || a==c){
	res = 1;
	puts("треугольник равнобедренный !!!!!!!!!!!!!!! ");
 }
 else
 {
	 puts("Error");
 }
 
}
