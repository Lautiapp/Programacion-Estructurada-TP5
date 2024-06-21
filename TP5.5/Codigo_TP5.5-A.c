#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int vector[10];

    scanf("%d", &vector[0]);
    scanf("%d", &vector[1]);
    scanf("%d", &vector[2]);
    scanf("%d", &vector[3]);
    scanf("%d", &vector[4]);
    scanf("%d", &vector[5]);
    scanf("%d", &vector[6]);
    scanf("%d", &vector[7]);
    scanf("%d", &vector[8]);
    scanf("%d", &vector[9]);

    int suma = vector[0] + vector[1] + vector[2] + vector[3] + vector[4] + vector[5] + vector[6] + vector[7] + vector[8] + vector[9];

    printf("%d", suma);
    
    return 0;
} //Son necesarias 24 lineas de codigo para desarrollar el programa sin ciclos de repeticion.