#include <stdio.h>

// Función creada para calcular el factorial de un número dado
int factorial(int n) {
    int i = 1;
    // Mientras n sea mayor que 1, se multiplica i por n
    while (n > 1) {
        i = i * n;  // Se multiplica i por n y se almacena el resultado en i
        n = n - 1;  // Se decrementa n en 1 para la próxima iteración
    }
    return i;  // Se devuelve el resultado del factorial
}

// Esta es la función principal del programa que declara una variable donde mas adelante almacenara el numero ingresado por el usuario
int main(int argc, char *argv[]) {
    int num;
    
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &num);  // Lee el número ingresado por el usuario

    // Se llama a la función factorial para calcular el factorial del número ingresado
    int fac_num = factorial(num);

    // Se imprime el resultado del cálculo del factorial
    printf("%d! = %d\n", num, fac_num);

    return 0;  // Aqui se indica que el programa finalizó correctamente
}
