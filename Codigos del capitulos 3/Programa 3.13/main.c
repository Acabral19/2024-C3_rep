#include <stdio.h>

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;  // Variables para los dos primeros n�meros y el siguiente en la serie
    printf("\t%d\t%d", PRI, SEG);  // Imprime los dos primeros n�meros de la serie

    // Bucle que genera la secuencia de Fibonacci desde el tercer t�rmino hasta el 50
    for (I = 3; I <= 50; I++)
    {
        SIG = PRI + SEG;  // Calcula el siguiente n�mero en la serie
        PRI = SEG;       // Actualiza PRI al valor de SEG
        SEG = SIG;       // Actualiza SEG al nuevo valor de SIG
        printf("\t%d", SIG);  // Imprime el siguiente n�mero en la serie
    }
}
