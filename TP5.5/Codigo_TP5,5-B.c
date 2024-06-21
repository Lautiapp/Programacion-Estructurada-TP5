#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int vector[10];
    int suma = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &vector[i]);
        suma += vector[i];
    }

    printf("%d", suma);
    
    return 0;
} //Son necesarias 18 lineas de codigo para desarrollar el programa sin ciclos de repeticion.