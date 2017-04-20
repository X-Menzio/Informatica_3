#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Quadrato
   Autore: Marchetti Matteo
   Data: 13/04/2017
   Classe: 3INA
   Versione 1.1*/
   
int main(){
	int n;
	int I;
	int K;
	
	printf("Inserire un numero\n");
	scanf("%d", &n);
    I=0;
    while(I<n){
    	printf("*");
    	K=1;
    	while(K<n-1){
    		if((I==0)||(I==(n-1))){
    		  printf("*");	
			}else{
				printf(" ");
			}
			K++;
		}
		printf("*");
		printf("\n");
		I++;	
		}
}
