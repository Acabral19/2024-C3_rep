#include <stdio.h>

void main(void)
{
    int I, J, NUM, SUM, C = 0;  // I: n�mero actual, J: divisor, NUM: l�mite, SUM: suma de divisores, C: contador de n�meros perfectos

    printf("\nIngrese el n�mero l�mite: ");
    scanf("%d", &NUM);  // Lee el l�mite superior para buscar n�meros perfectos

    // Bucle para iterar desde 1 hasta el n�mero l�mite
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;  // Reinicia la suma de divisores para el n�mero actual

        // Bucle para encontrar divisores de I
        for (J = 1; J <= (I / 2); J++)
        {
            if ((I % J) == 0)  // Verifica si J es un divisor de I
                SUM += J;  // Suma el divisor
        }

        // Verifica si la suma de divisores es igual al n�mero I (n�mero perfecto)
        if (SUM == I)
        {
            printf("\n%d es un n�mero perfecto", I);  // Imprime el n�mero perfecto encontrado
            C++;  // Incrementa el contador de n�meros perfectos
        }
    }

    // Muestra la cantidad de n�meros perfectos encontrados entre 1 y NUM
    printf("\nEntre 1 y %d hay %d n�meros perfectos", NUM, C);
}
