#include <stdio.h>

void main(void)
{
    int I, NUM;  // Variables para el contador del bucle (I) y el número ingresado por el usuario (NUM)
    long FAC;  // Variable para almacenar el factorial del número

    // Solicita al usuario que ingrese un número
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);  // Lee el número ingresado

    // Verifica si el número ingresado es mayor o igual a 0
    if (NUM >= 0)
    {
        FAC = 1;  // Inicializa la variable factorial en 1

        // Bucle para calcular el factorial
        for (I = 1; I <= NUM; I++)
            FAC *= I;  // Multiplica FAC por el valor de I en cada iteración

        // Muestra el resultado del factorial
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else
        // Mensaje de error si el número ingresado es negativo
        printf("\nError en el dato ingresado");
}
