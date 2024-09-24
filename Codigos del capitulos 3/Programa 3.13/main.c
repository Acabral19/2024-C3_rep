#include <stdio.h>

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;  // Variables para los dos primeros números y el siguiente en la serie
    printf("\t%d\t%d", PRI, SEG);  // Imprime los dos primeros números de la serie

    // Bucle que genera la secuencia de Fibonacci desde el tercer término hasta el 50
    for (I = 3; I <= 50; I++)
    {
        SIG = PRI + SEG;  // Calcula el siguiente número en la serie
        PRI = SEG;       // Actualiza PRI al valor de SEG
        SEG = SIG;       // Actualiza SEG al nuevo valor de SIG
        printf("\t%d", SIG);  // Imprime el siguiente número en la serie
    }
}
