#include <stdio.h>
#include <math.h>  // Incluimos la biblioteca matem�tica para usar la funci�n pow

void main(void)
{
    int NUM;  // Variable para almacenar el n�mero ingresado por el usuario
    printf("Ingrese el numero para calcular la serie: ");
    scanf("%d", &NUM);  // Lee el n�mero ingresado

    // Verifica que el n�mero sea mayor que 0
    if (NUM > 0)
    {
        printf("\nSerie de ULAM\n");  // Indica que se va a calcular la serie de Ulam
        printf("%d \t", NUM);  // Imprime el n�mero inicial

        // Bucle que calcula la serie de Ulam hasta que NUM sea igual a 1
        while (NUM != 1)
        {
            // Verifica si el n�mero es par
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;  // Si es par, se divide entre 2
            else
                NUM = NUM * 3 + 1;  // Si es impar, se multiplica por 3 y se le suma 1

            printf("%d \t", NUM);  // Imprime el siguiente n�mero en la serie
        }
    }
    else
        printf("\nNUM debe ser entero positivo");  // Mensaje de error si el n�mero no es positivo
}
