#include <stdio.h>
  

 void  movertorre (int t1) {
 if (t1 > 0) {
    printf(" Direita\n");
 movertorre (t1 - 1);

 }
   }
void moverbispo (int b1) {
if (b1 > 0) {


for ( int b2 = 1 ; b2 <= 1 ;  b2++) {
printf ("Cima\n");
for (int b3 = 1 ; b3 <= 1;  b3++) {
printf ("Direita\n");

}
  }  
moverbispo (b1 - 1);

}
  }
void moverrainha (int r1) {
 if (r1 > 0 ) {
printf  ("Esquerda\n ");
moverrainha  (r1 - 1) ;


 }
    }

int main() {
int b = 1, R = 0;
int c; 


printf (" Movendo Torre \n");
movertorre (5);

  printf ("\n"); 

  printf ("Movendo Bispo \n");
moverbispo (5);

    printf ("\n"); // espaço 
 printf (" Movendo Rainha\n");

    moverrainha (8);
    


 printf ("\n");
printf (" movendo cavalo \n");
for ( int c = 1; c <= 2 ; c++ ) {
printf ("Cima\n");
if (c == 2 ){
 for (int c2 = 0 ; c2 < 1; c2++) {
printf ("Direita\n");
 } 
    }
       }
    return 0;
 }