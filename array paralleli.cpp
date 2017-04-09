#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Titolo: Scrivere un programma che consenta di registrare i minuti di ritardo effettuati dagli allievi delle classi della scuola.
   		   Si ha la possibilità di registrare per ogni classe il numero di alunni  che ha effettuato il ritardo indicato.
		   Si vuole calcolare per ogni classe il tempo medio di ritardo;
		   determinare la classe che ha effettuato il minor numero di ritardo e il maggior numero di ritardo.
		   effettuare il calcolo del ritardo complessivo su una scuola di terza media 
   Autore: Marchetti Matteo
   Data: 03/04/2017
   Classe: 3INA
   Versione 1.0*/

int main()
{
	int alunni1;					// numero di alunni della prima classe
	int alunni2;					// numero di alunni della seconda classe
	int alunni3;					// numero di alunni della terza classe
	int X;						    //  contatore 
	int I;							//  contatore
	int classe1[50];				//  tempo di ritardo degli alunni della prima classe 
	int classe2[50];				// tempo di ritardo degli alunni della seconda classe 
	int classe3[50];				//  tempo di ritardo degli alunni della terza classe 
	int ritardo1[4]={0,0,0,0};		//  indica quanti alunni della prima classe hanno fatto ritardo
	int ritardo2[4]={0,0,0,0};		//  indica quanti alunni della seconda classe hanno fatto ritardo
	int ritardo3[4]={0,0,0,0};		//  indica quanti alunni della terza classe hanno fatto  ritardo
	int tot1;			             	//  minuti di ritardo della prima classe
	int tot2;			             	//  minuti di ritardo della seconda classe
	int tot3;			 	           //  minuti di ritardo della terza classe
	float mediaritardo1;			//  media dei minuti di ritardo totali della prima classe
	float mediaritardo2;			//  media dei minuti di ritardo totali della seconda classe
	float mediaritardo3;			//  media dei minuti di ritardo totali della terza classe
	float mediatot;				//  minuti di ritardo totali di tutte e tre le classi
	float mediacompl;		//  media complessiva
	
	do{											// inizio ciclo  do-while 
		printf("inserisci il numero di alunni della prima classe: ");
		scanf("%d", &alunni1);
	}while((alunni1<1) || (alunni1>50));
		
	printf("\n");
	X=0;
	tot1=0;
	
	while(X<alunni1){		// Inizio ciclo while			
		do{								
			printf("inserisci i minuti di ritardo dell'alunno numero %d: ", X+1);
			scanf("%d", & classe1[X]);
		}while((classe1[X]!=0) && (classe1[X]!=5) && (classe1[X]!=10) && (classe1[X]!=15));
		  	
		if(classe1[X]==0){					//  0 minuti di ritardo
			ritardo1[0]++;
		}else{
			if(classe1[X]==5){				//  5 minuti di ritardo
				ritardo1[1]++;
			}else{
				if(classe1[X]==10){			//  10 minuti di ritardo
					ritardo1[2]++;
				}else{
					if(classe1[X]==15){		//  15 minuti di ritardo
						ritardo1[3]++;
					}
				}
			}
		}
		tot1+=classe1[X];			
		X++;
	}											// fine ciclo while
	mediaritardo1=(float)tot1/alunni1;
	printf("\n");
	
	do{											// inizio ciclo do-while 
		printf("inserisci il numero di alunni della seconda classe: ");
		scanf("%d", &alunni2);
	}while((alunni2<1) || (alunni2>50));	// fine ciclo do-while
	printf("\n");
	X=0;
	tot2=0;
	while(X<alunni2){						// inizio ciclo while
		do{									
			printf("inserisci i minuti di ritardo dell'alunno numero %d: ", X+1);
			scanf("%d", &classe2[X]);
		}while((classe2[X]!=0) && (classe2[X]!=5) && (classe2[X]!=10) && (classe2[X]!=15));		
		if(classe2[X]==0){				     // 0 minuti di ritardo
			ritardo2[0]++;
		}else{
			if(classe2[X]==5){				//  5 minuti di ritardo
				ritardo2[1]++;
			}else{
				if(classe2[X]==10){			//  10 minuti di ritardo
					ritardo2[2]++;
				}else{
					if(classe2[X]==15){		// 15 minuti di ritardo
						ritardo2[3]++;
					}
				}
			}
		}
		tot2+=classe2[X];
		X++;
	}											// fine ciclo while-do
	mediaritardo2=(float)tot2/alunni2;
	printf("\n");
	
	do{								
		printf("inserisci il numero di alunni della terza classe: ");
		scanf("%d", &alunni3);
	}while((alunni3<1) || (alunni3>50));	
	printf("\n");
	X=0;
	tot3=0;
	while(X<alunni3){						// inizio ciclo  while
		do{										
			printf("inserisci i minuti di ritardo dell'alunno numero %d: ", X+1);
			scanf("%d", &classe3[X]);
		}while((classe3[X]!=0) && (classe3[X]!=5) && (classe3[X]!=10) && (classe3[X]!=15));		
		if(classe3[X]==0){		          	// 0 minuti di ritardo
			ritardo3[0]++;
		}else{
			if(classe3[X]==5){				//  5 minuti di ritardo
				ritardo3[1]++;
			}else{
				if(classe3[X]==10){			// 10 minuti di ritardo
					ritardo3[2]++;
				}else{
					if(classe3[X]==15){		// 15 minuti di ritardo
						ritardo3[3]++;
					}
				}
			}
		}
		tot3+=classe3[X];
		X++;
	}											// fine ciclo while
	mediaritardo3=(float)tot3/alunni3;
	
	X=0;
	I=0;
	while(X<4){			// controllo quanti alunni della prima classe hanno fatto  ritardo
		printf("\ngli alunni che hanno fatto %d minuti di ritardo nella prima classe sono: %d", I, ritardo1[X]);
		X++;
		I+=5;
	}					
	printf("\n");
	X=0;
	I=0;
	while(X<4){			// controllo quanti alunni della seconda classe hanno fatto ritardo
		printf("\ngli alunni che hanno fatto %d minuti di ritardo nella seconda classe sono: %d", I, ritardo2[X]);
		X++;
		I+=5;
	}						
	printf("\n");
	X=0;
	I=0;
	while(X<4){			//  controllo quanti alunni della terza classe hanno fatto ritardo
		printf("\ngli alunni che hanno fatto %d minuti di ritardo nella terza classe sono: %d", I, ritardo3[X]);
		X++;
		I+=5;
	}					
	printf("\n");
	printf("\nla media di ritardo degli alunni nella prima classe e': %f", mediaritardo1);
	printf("\nla media di ritardo degli alunni nella seconda classe e': %f", mediaritardo2);
	printf("\nla media di ritardo degli alunni nella terza classe e': %f", mediaritardo3);
	printf("\n");
	
	if(mediaritardo1>mediaritardo2){		
		if(mediaritardo1>mediaritardo3){	
			printf("\nla media maggiore di ritardo e' %.3f ed e' stata effettuata dalla prima classe", mediaritardo1);
		}else{
			printf("\nla media maggiore di ritardo e' %.3f ed e' stata effettuata dalla terza classe", mediaritardo3);
		}
	}else{
		if(mediaritardo2>mediaritardo3){	
			printf("\nla media maggiore di ritardo e' %.3f ed e' stata effettuata dalla seconda classe", mediaritardo2);
		}else{
			printf("\nla media maggiore di ritardo e' %.3f ed e' stata effettuata dalla terza classe", mediaritardo3);
		}
	}
	if(mediaritardo1<mediaritardo2){		
		if(mediaritardo1<mediaritardo3){	
			printf("\nla media minore di ritardo e' %.3f ed e' stata effettuata dalla prima classe", mediaritardo1);
		}else{
			printf("\nla media minore di ritardo e' %.3f ed e' stata effettuata dalla terza classe", mediaritardo3);
		}
	}else{
		if(mediaritardo2<mediaritardo3){	
			printf("\nla media minore di ritardo e' %.3f ed e' stata effettuata dalla seconda classe", mediaritardo2);
		}else{
			printf("\nla media minore di ritardo e' %.3f ed e' stata effettuata dalla terza classe", mediaritardo3);
		}
	}
	printf("\n");
	
	mediatot=mediaritardo1+mediaritardo2+mediaritardo3;
	mediacompl=mediatot/3;
	printf("\nla media totale dei minuti di ritardo di tutte le classi e': %f", mediatot);
	printf("\nla media complessiva dei minuti di ritardo di tutte le classi e': %f", mediacompl);
	printf("\n");
	system("PAUSE");
}
