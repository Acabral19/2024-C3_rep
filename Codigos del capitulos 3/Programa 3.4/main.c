#include <stdio.h>
#include <math.h>  // Se incluye para usar la funci�n pow (potencias)

void main(void)
{
    int NUM;  // Variable para almacenar el n�mero ingresado
    long CUA, SUC = 0;  // Variables para el cuadrado del n�mero y la suma acumulada de cuadrados

    // Se solicita al usuario ingresar el primer n�mero
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);  // Se lee el n�mero ingresado

    // Mientras el n�mero no sea 0, el bucle continuar�
    while (NUM)
    {
        // Se calcula el cuadrado del n�mero usando la funci�n pow
        CUA = pow(NUM, 2);

        // Se imprime el resultado del cuadrado del n�mero ingresado
        printf("%d al cuadrado es %ld", NUM, CUA);

        // Se suma el cuadrado del n�mero a la variable SUC
        SUC = SUC + CUA;

        // Se solicita otro n�mero para continuar o terminar (si es 0)
        printf("\nIngrese un numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);  // Se lee el nuevo n�mero ingresado
    }

    // Al finalizar el bucle, se imprime la suma total de los cuadrados calculados
    printf("\nLa suma de los cuadrados es %ld", SUC);
}

