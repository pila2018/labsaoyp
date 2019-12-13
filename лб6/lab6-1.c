#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(){
   int *ptr, i, n;
   do{
       printf("¬ведите количество элементов массива(<30)\n");
       scanf("%d", &n);
   }while(n>=30);
   if(!(ptr=(int*)malloc(n*sizeof(int)))){
       puts("Not enough memory!");
       getch();
       return;
   }
   for (i=0;i<n;i++){
       printf("Vvedite element [%d]\n", i+1); 
       scanf("%d",ptr+i); 
   }
   printf("\nMassiv: \n", i+1); 
   for (i=0;i<n;i++){
       printf("%d ", *(ptr+i)); 
   }
   int p = 1;
   for(i=0; i<n; i++){
       if(*(ptr+i)<0){
           p *= *(ptr+i);
       }
   }
   printf("\n proizvedenie %d", p);
} 

