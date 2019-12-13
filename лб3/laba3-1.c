#include <stdio.h>
#include <stdlib.h>
//Имеются контейнеры двух видов: по 130кг и 160кг. Можно ли полностью
//загрузить ими грузовик грузоподъёмностью 3т.
int main(void)
{
	
	int kg1 = 130;
	int kg2 = 160;
	int t = 3000;
	int i, j;
	
	for(i=0; i<=50; i++)
	{
		for(j=0; j<=50; j++)
		{
			if(kg1 * i + kg2 * j == t)
			{
				printf("%d %d",i,j);
				
			}
		}
        
	}
	return 0;
}
	