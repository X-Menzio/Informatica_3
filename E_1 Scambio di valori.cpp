#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Matteo Marchetti 3°INA 14/11/2016 
// Scambio di valori
int main()
{
  int a; // Primo valore preso in Input
  int b; // Secondo valore preso in Input
  int c; // Variabile temporanea
  
  printf("\n Inserire un numero ");
  scanf("%d",&a);
  printf("\n Inserire un' altro numero ");
  scanf("%d",&b);
  
  c=a;
  a=b;
  b=c;
  
  printf("\n Il numero e' %d", a);
  printf("\n il numero e' %d", b);
 
  system("PAUSE");
 
}
