#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int vector[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Ingrese un valor: ");
        scanf("%d", &vector[i]);
    }

    for (i = 9; i >= 0; i--) {
        printf("El valor en la posicion %d del vector es: %d\n", i, vector[i]);
    }
    
    return 0;
}