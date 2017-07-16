#include <stdio.h>
#include <stdlib.h>
int i,x,a,b,c,d,y,s;
int e[50][50];
int contador = 0;
int suma = 0;
int h[50];
int f = 0;

int main(){
    a = base();
    printf ("esta es la matris \n");
    for (i=0; i<d; i++){
        for (x=0; x<d; x++){
            printf ("%d \n", e[i][x]);
            }
        }
    for (i=0; i<d; i++){
        for (x=0; x<d; x++){
            h[s] = e[i][x];
            s = s + 1;
            }
        }
    printf ("Este es el vector \n");
    for (i=0; i<(d*d); i++){
        printf ("%d \n", h[i]);
        }
   
    printf ("Esta es la cantidad de numeros que hay: %d \n", contador);
    printf ("Esta es la suma de los numeros: %d \n", suma);
  
  system("PAUSE");	
  return 0;
}

int base(){
    b = datos();
    c = procesa();    
}

int datos(){
    printf ("Cantidad:");
    scanf ("%d", &d);
    
    return d;
}

int procesa(){
    for (i=0; i<d; i++){
        for (x=0; x<d; x++){
            printf ("Cual es el numero:");
            scanf ("%d", &y);
            e[i][x] = y;
            suma = suma + y;
            contador = contador += 1;
            }
        }
    return 0;
}
