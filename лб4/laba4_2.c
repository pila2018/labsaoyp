
# include <stdio.h>
# include <locale.h>
//Дан массив из 10 элементов. Первые 4 упорядочить по возрастанию,
//последние 4 по убыванию
void main(){

	
	int masiv[10];
	int i;
	for (i=0; i<10; i+=1){
		scanf("%d", &masiv[i]);
	}

	int first[4]; int last[4];
	
	for (i=0; i<4; i++){
		first[i] = masiv[i];
		last[i] = masiv[i+6];
	} 
//---------------------------------------------

	int a; int b; int z;
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
		
			if(first[b]>first[b+1]){
				z = first[b];
				first[b] = first[b+1];
				first[b+1] = z;
			}
			
			if(last[b]>last[b+1]){
				z = last[b];
				last[b] = last[b+1];
				last[b+1] = z;
			}
				
		}
	}

//---------------------------------------------
	int last_r[4];
	for (i=0; i<4; i++){
		last_r[i] = last[3-i];
	}
	
	for (i=0; i<10; i++){
		if (i<4){
			masiv[i] = first[i];
		}
		if (i>5){
			masiv[i] = last_r[i-6];
		}
	}
	
		for (i=0; i<10; i++){
			printf("%d ", masiv[i]);
		}

}
