#include <stdio.h>
#include <stdlib.h>
int main(void) {
char count[9];
puts("Vvedite staranu(Bel,Egipet,Kuba,Mayagua):"); scanf("%s",&count);

switch (count[0]){
	
		case 'Bel': puts("Evrazia"); break;
		case 'Egipet':puts("Africa"); break;
		case 'Kuba': puts("Y America"); break;
		case 'Mayagua': puts("C America"); break;
}
return 0;
}

