#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
/* Titolo: 
   Autore: Marchetti Matteo 
   Data: 30/01/2017 
   Classe: 3INA 
   Versione 1.0*/
    
   int main(){
   	
   	int n2;
   	int n1;
   	int k;
   	int I;
   	int X;
   	int C;
   	int num;
   	int vett [999];

    do{
    	printf("Inserire n2 che deve essere dispari e minore di 1000\n");
    	scanf("%d", &n2);
	}while(!((n2<1000)&&(n2%2!=0)));
	
	do{
		printf("Inserire n1 che deve essere minore di n2 e maggiore di 0\n");
		scanf("%d", &n1);
	}while(!((n1<n2)&&(n1>0)));
	
	do{
		printf("Inserire k che deve essere compreso tra n1 e n2\n");
		scanf("%d", &k);
	}while(!((n1<k)&&(k<n2)));
	
	I=0;	
	while(I<k){
		 printf("Inserire un numero\n");
		 scanf("%d", &vett[I]);
		 I++;
	}
	 printf("Inserire uno scalare\n");
	 scanf("%d", &num);
	 I=0;
	 X=0;
	 while(I<k){
	 	  vett[I]=vett[I]*num;
	 	  I++;
	 }
	 C=0;
	 I=0;
	 while(C<k){
	 	  printf("%d\n",vett[I]);
	 	  C++;
	 	  I++;
	 }
}

	
	
	
	
	
	
	
