#include <stdio.h>

void main(void)
{
    int I, J, NUM, SUM, C = 0;  // I: número actual, J: divisor, NUM: límite, SUM: suma de divisores, C: contador de números perfectos

    printf("\nIngrese el número límite: ");
    scanf("%d", &NUM);  // Lee el límite superior para buscar números perfectos

    // Bucle para iterar desde 1 hasta el número límite
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;  // Reinicia la suma de divisores para el número actual

        // Bucle para encontrar divisores de I
        for (J = 1; J <= (I / 2); J++)
        {
            if ((I % J) == 0)  // Verifica si J es un divisor de I
                SUM += J;  // Suma el divisor
        }

        // Verifica si la suma de divisores es igual al número I (número perfecto)
        if (SUM == I)
        {
            printf("\n%d es un número perfecto", I);  // Imprime el número perfecto encontrado
            C++;  // Incrementa el contador de números perfectos
        }
    }

    // Muestra la cantidad de números perfectos encontrados entre 1 y NUM
    printf("\nEntre 1 y %d hay %d números perfectos", NUM, C);
}
