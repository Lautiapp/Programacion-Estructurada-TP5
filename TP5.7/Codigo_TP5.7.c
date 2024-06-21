#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int matriz1[2][2];
    int matriz2[2][2];
    int matriz_resultado[2][2];
    int i, k, j;

    for(i = 0; i < 2; i++) {
        for(k = 0; k < 2; k++){
            printf("\nIngrese el valor de la fila %d, columna %d de la primer matriz: ", i + 1, k + 1);
            scanf("%d", &matriz1[i][k]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(k = 0; k < 2; k++){
            printf("\nIngrese el valor de la fila %d, columna %d de la segunda matriz: ", i + 1, k + 1);
            scanf("%d", &matriz2[i][k]);
        }
    }

    
    for(i = 0; i < 2; i++) {
        for(k = 0; k < 2; k++){
            matriz_resultado[i][k] = 0;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2; k++){
                matriz_resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }



     for(i = 0; i < 2; i++) {
        for(k = 0; k < 2; k++){
            printf("\nEl valor de la fila %d columna %d, resultante del producto de las matrices ingresadas es: %d", i + 1, k + 1, matriz_resultado[i][k]);
        }
    }
    

    
    return 0;
}