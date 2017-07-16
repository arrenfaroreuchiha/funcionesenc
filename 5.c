#include <stdio.h>
#include <stdlib.h>
int e, suma = 0, contador = 0;

int main(){
    base();
    printf ("Esta es la suma de los numeros: %d \n", suma);
    printf ("Esta es la cantidad de numeros que hay: %d \n", contador);
  
  system("PAUSE");	
  return 0;
}

int base(){
    datos();
    procesa();
}

int datos(){
    
    printf ("Cantidad:");
    scanf ("%d", &e);
}

int procesa(){
    int i, x, b, c, f, d;
    int v = 0;
    int g[50][50];
    int h[50];
    
    for (i=0; i<e; i++){
        for (x=0; x<e; x++){
            printf ("Numero:");
            scanf ("%d", &f);
            g[i][x] = f;
            contador = contador + 1;
            suma = suma + f;
            }
        }
    for (i=0; i<e; i++){
        for (x=0; x<e; x++){
            h[v] = g[i][x];
            v = v + 1;
            }
        }
        
    for (i=0; i<e; i++){
        for (x=0; x<e; x++){
            printf ("%d \n", g[i][x]);
            }
        }
    
    for (i=0; i<(e*e); i++){
        printf ("%d \n", h[i]);
        }
}
