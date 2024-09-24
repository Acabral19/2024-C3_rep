#include <stdio.h>  // Se incluye la librer�a est�ndar de entrada/salida

void main(void)  // Funci�n principal del programa
{
    int I;  // Declaraci�n de una variable entera para controlar el bucle
    float SAL, NOM;  // Declaraci�n de variables flotantes para el salario y el total de la n�mina
    NOM = 0;  // Inicializaci�n de la variable NOM (n�mina total) en 0

    // Bucle for que se ejecuta 14 veces (de I=1 a I<15)
    for (I = 1; I < 15; I++)
    {
        // Muestra un mensaje en la consola solicitando el salario del profesor I
        printf("\Ingrese el salario del profesor %d:\t", I);
        // Lee el salario ingresado por el usuario y lo guarda en la variable SAL
        scanf("%f", &SAL);
        // Suma el salario ingresado al total acumulado en NOM
        NOM = NOM + SAL;
    }

    // Al finalizar el bucle, muestra el total de la n�mina acumulada con dos decimales
    printf("\nEl total de la nomina es: %.2f", NOM);
}
