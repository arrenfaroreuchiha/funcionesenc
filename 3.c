#include <stdio.h>
#include <stdlib.h>
int a,i,d,c,b,f;
int contador = 0;
int e[50];

int main(){
    a = base();
    for (i=0; i<d; i++){
        printf ("%d \n", e[i]);
        }
    printf ("Esta es la suma de los numeros: %d \n", contador);
  
  system("PAUSE");	
  return 0;
}

int base(){
    b = base1();
    c = datos();
    }

int base1(){
    printf ("Cantidad de numeros:");
    scanf ("%d", &d);
    
    return d; 
}

int datos(){
    for (i=0; i<d; i++){
        printf ("Cual es el numero:");
        scanf ("%d", &e[i]);
        contador = contador + e[i];
        }
    return 0;
}


