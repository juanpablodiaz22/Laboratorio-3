#include <stdio.h>

int main() {
    // Declarar las variables
    int i, num_triangular = 0;
    
    // Impresión del encabezado
    printf("Los primeros 100 números triangulares son:\n");
    
    // Bucle que calcula los números triangulares y luegos los imprime 
    for (i = 1; i <= 100; ++i) {
        num_triangular += i;  // Suma del valor de i al número triangular por el que va, de manera que lo acumula 
        printf("%d ", num_triangular);
    }
    
    printf("\n");
    
    return 0;  // Se hace retornar 0 para indicar que el programa terminó correctamente
}