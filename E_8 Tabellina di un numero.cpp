#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Tabellina di un numero
   Autore: Marchetti Matteo
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n;
	int tab;
	int I;
	
	do{
		printf("Inserire un numero\n");
		scanf("%d", &n);
	} while(!(n>=2)&&(n<=10));
	I=1;
	tab=0;
	while(I<=10){
		tab=tab+n;
		printf("La tabellina e'%d\n", tab);
		I++;
	}
	system("PAUSE");
}
