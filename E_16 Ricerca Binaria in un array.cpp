#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Ricerca binaria in un array
   Autore: Marchetti Matteo
   Data: 02/03/2017
   Classe: 3INA
   Versione 1.0*/
   int main (){
   	int n;
   	int min;
   	int max;
   	int centro;
   	int trovato;
   	int num[20]={0,3,6,9,10,12,14,19,24,26,27,29,30,34,39,41,45,48,49,55};
   	
   	printf("Inserire un numero\n");
   	scanf("%d", &n);
   	
   	min=0;
   	max=19;
   	trovato=0;
   	
   	while((trovato==0)&&(min<=max)){
   		centro=(min+max)/2;
   		if(n==num[centro]){
   			trovato=1;
		   }else{
		   	     if(n>num[centro]){
		   	     	min=centro+1;
					}else{
						max=centro-1;
					}
		   		}
	   }
	   if(trovato==1){
	   	printf("Trovato\n");
	   }else{
	   	     printf("Non trovato");
	   }
}
