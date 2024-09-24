#include <stdio.h>

void main(void)
{
    int I, NUM;  // Variables para el contador del bucle (I) y el n�mero ingresado por el usuario (NUM)
    long FAC;  // Variable para almacenar el factorial del n�mero

    // Solicita al usuario que ingrese un n�mero
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);  // Lee el n�mero ingresado

    // Verifica si el n�mero ingresado es mayor o igual a 0
    if (NUM >= 0)
    {
        FAC = 1;  // Inicializa la variable factorial en 1

        // Bucle para calcular el factorial
        for (I = 1; I <= NUM; I++)
            FAC *= I;  // Multiplica FAC por el valor de I en cada iteraci�n

        // Muestra el resultado del factorial
        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else
        // Mensaje de error si el n�mero ingresado es negativo
        printf("\nError en el dato ingresado");
}
