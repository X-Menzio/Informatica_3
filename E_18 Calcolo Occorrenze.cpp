#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Calcolo Occorrenze
   Autore: Marchetti Matteo
   Data: 22/03/2017
   Classe: 3INA
   Versione 1.0*/
   
int main(){
	char nome[101]; //stringa caratteri
	int scelta;  //variabile scelta
	int C;  //contatore
	int I;  //contatore
	int Q;  //contatore
	int L;  //contatore
	do{
	printf("1-Inserisci il tuo nome \n");
	printf("2-Calcola lunghezza del nome\n");
	printf("3-Calcolo occorrenze\n");
	printf("0-EXIT \n\n");
		printf("Scegli la parte di programma da eseguire\n");
		scanf("%d",&scelta);
		switch(scelta){
			case 1:
				printf("\nInserisci il tuo nome (Massimo 100 caratteri): ");
				scanf("%s",nome);
				printf("\n Nome Inserito correttamente \n");
				break;
			case 2:
				C=0;
				while(nome[C]!='\0'){
					C++;
				}
				printf("Il tuo nome e' lungo %d caratteri \n",C);
				break;
			case 3:
				C=0;
				while(nome[C]!='\0'){
					C++;
				}
				for(I=0;I<C;I++){
					Q=1;
					if(nome[I]!=0){
						for(L=I+1;L<C;L++){
							if(nome[I]==nome[L]){
								Q++;
								nome[L]=0;
							}							
						}
					}
					if(nome[I]!=0){
						printf("Il carattere %c e' presente' %d volte\n",nome[I],Q);
					}
				}
				break;
		}
	}while(scelta!=0);
	getchar();
	getchar();
}
