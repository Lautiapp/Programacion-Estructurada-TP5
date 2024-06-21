#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    do {
        printf("Ingrese el numero de un mes: ");
        scanf("%d", &mes);
    } while(mes < 1 || mes > 12);

    printf("\nEl mes ingresado tiene %d dias\n", dias_mes[mes - 1]);
    
    return 0;
}