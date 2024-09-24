#include <stdio.h>
#include <math.h>  // Se incluye para usar la función pow (potencias)

void main(void)
{
    int NUM;  // Variable para almacenar el número ingresado
    long CUA, SUC = 0;  // Variables para el cuadrado del número y la suma acumulada de cuadrados

    // Se solicita al usuario ingresar el primer número
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);  // Se lee el número ingresado

    // Mientras el número no sea 0, el bucle continuará
    while (NUM)
    {
        // Se calcula el cuadrado del número usando la función pow
        CUA = pow(NUM, 2);

        // Se imprime el resultado del cuadrado del número ingresado
        printf("%d al cuadrado es %ld", NUM, CUA);

        // Se suma el cuadrado del número a la variable SUC
        SUC = SUC + CUA;

        // Se solicita otro número para continuar o terminar (si es 0)
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);  // Se lee el nuevo número ingresado
    }

    // Al finalizar el bucle, se imprime la suma total de los cuadrados calculados
    printf("\nLa suma de los cuadrados es %ld", SUC);
}

