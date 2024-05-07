#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10  // Es el tamaño máximo que va a tener la matriz

int findLargestSquare(int matrix[][SIZE], int size) {
    int maxSize = 0;  // Tamaño máximo del cuadrado a 0

    // Se recorre la matriz para encontrar el cuadrado más grande de unos consecutivos
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // Si la celda actual es 1, se explora hacia abajo y hacia la derecha
            if (matrix[i][j] == 1) {
                int k = 1;
                // Se explora hacia abajo y hacia la derecha hasta encontrar el límite del cuadrado
                while (i + k < size && j + k < size && matrix[i + k][j] == 1 && matrix[i][j + k] == 1) {
                    // Si se llega a encontrar un cuadrado más grande, se actualiza el tamaño máximo
                    ++k;
                }
                if (k > maxSize) {
                    maxSize = k;
                }
            }
        }
    }

    return maxSize;  // Devuelve el tamaño del cuadrado más grande encontrado
}

void fillMatrixRandom(int matrix[][SIZE], int size) {
    // Llena la matriz de manera aleatoria
    srand(time(NULL));  // Se generan de números aleatorios

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 2;  // Se generan números aleatorios entre 0 y 1
        }
    }
}

int main() {
    int size;  // Es el tamaño de la matriz ingresada por el usuario
    int matrix[SIZE][SIZE];  // Matriz cuadrada binaria
    int largestSquareSize;  // Es el tamaño del cuadrado más grande encontrado

    // Solicita al usuario que ingrese un  numero para determinar el tamaño de la matriz
    printf("Ingrese el número de filas de la matriz nxn (1-10): ");
    scanf("%d", &size);

    // Se verifica si el tamaño de la matriz está dentro del rango
    if (size < 1 || size > 10) {
        printf("El tamaño ingresado no es válido. Se utilizará un valor por defecto.\n");
        size = SIZE;  // Se utiliza un valor por defecto por lo general seria de 10 x 10 
    }

    // Se llena la matriz de manera aleatoria
    fillMatrixRandom(matrix, size);

    // Imprime la matriz generada a partir del numero ingresado por el usuario
    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Se calcula el tamaño del cuadrado más grande de unos
    largestSquareSize = findLargestSquare(matrix, size);

    // Se imprime el tamaño del cuadrado más grande encontrado
    printf("El tamaño del cuadrado más grande de unos es: %d x %d.\n", largestSquareSize, largestSquareSize);

    return 0;
}
