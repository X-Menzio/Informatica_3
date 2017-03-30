#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Sotto programma per il controllo dell'input
   Autore: Marchetti Matteo
   Data: 30/03/2017
   Classe: 3INA
   Versione 1.0*/
   //In questa posizione definisco il mio sottoprogramma
   int input_n(int da,int a){
   	int n;
   	if(da>a){
   		int temp;
   		temp = da;
   		da = a;
   		a = temp;
	   }
   	  	do{
   		printf("\nInserire un numero (%d,%d): ",da,a);
   		scanf("%d", &n);
	   }while((n<da)||(n>a));
    return n; 
   }
   
   int main (){
   	int n1;
   	int n2;
   	int max;
   	
    //In questo punto richiamo il mio sottoprogramma
    n1 = input_n(800,200); // Invocazione della funzione input_n
    n2 = input_n(550,150); // Invocazione della funzione input_n
	   
	   if(n1>n2){
	   	     max=n1;
	   }else{
	   	     max=n2;
	   }
	   printf("\nIl numero maggiore e': %d",max);
}
