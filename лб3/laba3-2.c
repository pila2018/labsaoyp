 #include <stdio.h>
#include <stdlib.h>
//Найти сумму S и произведение P:
//а) четных чисел от 1 до n
//б) нечетных чисел от 1 до n
//в) чисел, кратных 3, от 1 до n.

void main(void){
	
int n; scanf("%d", &n);
int s_c, s_n,  s_k = 0;
int p_c = 1; int p_n = 1; int p_k = 1;
int i;

for (i=1; i<=n; i++){
	if (i%2==0){
		s_c +=i;
		p_c *=i;
	}
	if (i%2!=0){
		s_n +=i;
		p_n *=i;
	}
	if (i%3==0){
		s_k +=i;
		p_k *=i;
	}
}

printf("%d %d %d %d %d %d ", s_c, p_c, s_n, p_n, s_k, p_k);
return 0;

}