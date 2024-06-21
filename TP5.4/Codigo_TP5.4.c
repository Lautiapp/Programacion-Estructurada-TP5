#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char array[12] = "Bienvenidos";

    printf("%s", array);

//Si bien la palabra 'Bienvenidos' cuenta con 11 caracteres, el compilador añade automaticamente el caracter nulo '\0' que indica el fin de la cadena de caracteres,
///por lo que el tamaño del array debe de ser de 12 posiciones.
}