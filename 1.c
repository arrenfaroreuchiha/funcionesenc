#include <stdio.h>
#include <stdlib.h>
int a, i, c, f;
int b[50];
int contador  = 0;

int main(){
    c = base();
    for (i=0; i<a; i++){
        printf ("%d \n", b[i]);
        }
    printf ("esta es la suma de los numeros: %d \n", contador);
  system("PAUSE");	
  
  return 0;
}

int base(){
    a = entra();
    f = procesa();
    
}

int entra(){
    printf ("Cantidad:");
    scanf ("%d", &a);
    
    return a;
}

int procesa(){
    for (i=0; i<a; i++){
        printf ("Cual es el numero:");
        scanf ("%d", &b[i]);
        contador = contador + b[i];
        }
    
    return 0;
}

    
