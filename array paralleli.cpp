#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Array Paralleli
   Autore: Marchetti Matteo
   Data: 03/04/2017
   Classe: 3INA
   Versione 1.0*/
   
int main(){
	int alunni1;
	int alunni2;
	int alunni3;
	int I;
	int X;
	int classe1[100];
	int classe2[100];
	int classe3[100];
	int ritardo1[100];
	int ritardo2[100];
	int ritardo3[100];
	int tot1;
	int tot2;
	int tot3;
	int media1;
	int media2;
	int media3;
	
	printf("Inserisci il numero degli alunni");
	scanf("%d", &alunni1);
	printf("Inserisci il numero degli alunni");
	scanf("%d", &alunni2);
	printf("Inserisci il numero degli alunni");
	scanf("%d", &alunni3);
	I=0;
	tot1=0;
	for(X=0;X<100;X++){
		classe1[X]=0;
	}
		for(X=0;X<100;X++){
		classe2[X]=0;
	}
		for(X=0;X<100;X++){
		classe3[X]=0;
	}
		for(X=0;X<100;X++){
		ritardo1[X]=0;
	    }
	    	for(X=0;X<100;X++){
		ritardo2[X]=0;
	    }
	    	for(X=0;X<100;X++){
		ritardo3[X]=0;
	    }
	while(I<alunni1){
		do{
			printf("Inserire il ritardo");
			scanf("%d", &classe1[I]);
		}while((classe1[I]!=0)&&(classe1[I]!=5)&&(classe1[I]!=10)&&(classe1[I]!=15));
		if(classe1[I]==0){
			ritardo1[0]++;
		}else{
			 if(classe1[I]==5){
			 	ritardo1[1]++;
			 }else{
			 	if(classe1[I]==10){
			 		ritardo1[2]++;
				 }else{
				 	if(classe1[I]==15){
				 		ritardo1[3]++;
					 }
				 }
			 }
		}
		tot1+=classe1[I];
		I++;
		/*printf("%d",ritardo1[0]);
		printf("%d",ritardo1[1]);
		printf("%d",ritardo1[2]);
		printf("%d",ritardo1[3]);*/
	}
	media1=tot1/alunni1;
	I=0;
	tot2=0;
		while(I<alunni2){
		do{
			printf("Inserire il ritardo");
			scanf("%d", &classe2[I]);
		}while((classe2[I]!=0)&&(classe2[I]!=5)&&(classe2[I]!=10)&&(classe2[I]!=15));
		if(classe2[I]==0){
			ritardo2[0]++;
		}else{
			 if(classe2[I]==5){
			 	ritardo2[1]++;
			 }else{
			 	if(classe2[I]==10){
			 		ritardo2[2]++;
				 }else{
				 	if(classe2[I]==15){
				 		ritardo2[3]++;
					 }
				 }
			 }
		}
		tot2+=classe2[I];
		I++;
		printf("%d",ritardo2[0]);
		printf("%d",ritardo2[1]);
		printf("%d",ritardo2[2]);
		printf("%d",ritardo1[3]);
	}
	media2=tot2/alunni2;
	I=0;
	tot3=0;
		while(I<alunni3){
		do{
			printf("Inserire il ritardo");
			scanf("%d", &classe3[I]);
		}while((classe3[I]!=0)&&(classe3[I]!=5)&&(classe3[I]!=10)&&(classe3[I]!=15));
		if(classe3[I]==0){
			ritardo3[0]++;
		}else{
			 if(classe3[I]==5){
			 	ritardo3[1]++;
			 }else{
			 	if(classe3[I]==10){
			 		ritardo3[2]++;
				 }else{
				 	if(classe3[I]==15){
				 		ritardo3[3]++;
					 }
				 }
			 }
		}
		tot3+=classe3[I];
		I++;
		printf("%d",ritardo3[0]);
		printf("%d",ritardo3[1]);
		printf("%d",ritardo3[2]);
		printf("%d",ritardo3[3]);
	}
	media3=tot3/alunni3;
	
	if(media1>media2){
		if(media1>media3){
			printf("La media maggiore e'%d",media1);
		}else{
			printf("La media maggiore e'%d",media3);
		}
		if(media2>media3){
			printf("La media maggiore e'%d",media2);
			
		}
	}
}
	
