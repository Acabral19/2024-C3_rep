#include <stdio.h>
#include <math.h>  // Incluimos la biblioteca matemática para usar la función fabs

void main(void)
{
    int I = 1, B = 0, C = 0;  // Inicializa variables: I (denominador), B (alternador de signo), C (contador de términos)
    double RES;  // Variable para almacenar el resultado de la aproximación de π

    RES = 4.0 / I;  // Inicializa RES con el primer término de la serie
    C = 1;  // Contador de términos inicializado en 1

    // Bucle que continúa hasta que la diferencia con π sea menor que 0.0005
    while (fabs(3.1415 - RES) > 0.0005)
    {
        I += 2;  // Aumenta I en 2 para avanzar en la serie
        if (B)
        {
            RES += (double)(4.0 / I);  // Si B es 1, suma el siguiente término
            B = 0;  // Cambia B a 0 para la próxima iteración
        }
        else
        {
            RES -= (double)(4.0 / I);  // Si B es 0, resta el siguiente término
            B = 1;  // Cambia B a 1 para la próxima iteración
        }
        C++;  // Incrementa el contador de términos
    }

    // Muestra el número de términos utilizados para aproximar π
    printf("\nNúmero de términos: %d", C);
}
