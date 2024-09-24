#include <stdio.h>  // Se incluye la librer�a est�ndar de entrada/salida

void main(void)  // Funci�n principal del programa
{
    int I, N, NUM, SUM;  // Declaraci�n de variables enteras: I para controlar el bucle, N para el n�mero de datos, NUM para los n�meros ingresados y SUM para la suma de n�meros positivos.
    SUM = 0;  // Inicializaci�n de la variable SUM (suma total de n�meros positivos) en 0.

    // Solicita al usuario que ingrese la cantidad de n�meros que va a introducir.
    printf("Ingrese el numero de datos:\t");
    // Lee el n�mero ingresado por el usuario y lo almacena en la variable N.
    scanf("%d", &N);

    // Bucle for que se ejecuta N veces (de I=1 a I<=N), donde I es el contador.
    for (I = 1; I <= N; I++)
    {
        // Solicita al usuario que ingrese el dato n�mero I.
        printf("Ingrese el dato numero %d:\t", I);
        // Lee el n�mero ingresado por el usuario y lo almacena en la variable NUM.
        scanf("%d", &NUM);

        // Verifica si el n�mero ingresado es positivo.
        if (NUM > 0)
            // Si el n�mero es positivo, se suma al total acumulado en SUM.
            SUM = SUM + NUM;
    }

    // Al finalizar el bucle, muestra la suma total de los n�meros positivos ingresados.
    printf("\nLa suma de los numeros positivos es: %d", SUM);
}
