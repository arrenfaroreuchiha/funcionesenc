#include <stdio.h>
#include <stdlib.h>
int i, s, b, a, c, d, e, z;
int contador = 0;
int g[50];
int f[50][50];

int main(){
    a = base();
    for (i=0; i<e; i++){
        for (s=0; s<e; s++){
            printf ("%d \n", f[i][s]);
            }
        }
    for (i=0; i<e; i++){
        printf ("%d \n", g[i]);
        }
    printf ("Esta es la suma de los numeros: %d \n", contador);
  
  system("PAUSE");	
  return 0;
}

int base(){
    b = cantidad();
    c = numeros();
}

int cantidad(){
    printf ("cantidad de numeros:");
    scanf ("%d", &e);
    
    return e;
}

int numeros(){
    for (i=0; i<e; i++){
        for (s=0; s<e; s++){
            printf ("Cual es el numero:");
            scanf ("%d", &z);
            contador = contador + z;
            f[i][s] = z;
            g[i] = f[i][s];
            }
        }
    return 0;
}
