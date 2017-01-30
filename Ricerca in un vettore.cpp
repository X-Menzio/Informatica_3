#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
/* Titolo: Ricerca in un array
   Autore: Marchetti Matteo 
   Data: 30/01/2017 
   Classe: 3INA 
   Versione 1.0*/
    
   int main(){
   	int k;
   	int num;
   	int I;
   	int X;
   	int posizione;
   	int vett [999];
   	
   	do{
   		printf("Inserire k minore di 100\n");
   		scanf("%d", &k);
	   }while(!(k<100));
	   
	   printf("Inserire un numero");
	   scanf("%d", &num);
	   
	   for(I=0;I<k;I++){
	   	  printf("Inserire un numero\n");
	   	  scanf("%d",&vett[I]);
	   }
	   I=0;
	   X=0;
	   while(I<k && X==0){
	   	    if(vett[I]==num)
	   	      X=1;
	   	      posizione=I;
	          I++;
	      }
	      	if (X==1){	
	          for (I=posizione;I<k;I++)	
			      vett[I]=vett[I+1];
		          printf("Il vettore e':\n");	
		          for (I=0;I<k-1;I++)		
			          printf("%d\t",vett[I]);	
	       }	
	        else				
		        printf ("%d non si trova nel vettore",num);	
}
