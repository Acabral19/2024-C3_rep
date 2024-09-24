#include <stdio.h>  // Se incluye la librería estándar de entrada/salida

void main(void)  // Función principal del programa
{
    int I, N, NUM, SUM;  // Declaración de variables enteras: I para controlar el bucle, N para el número de datos, NUM para los números ingresados y SUM para la suma de números positivos.
    SUM = 0;  // Inicialización de la variable SUM (suma total de números positivos) en 0.

    // Solicita al usuario que ingrese la cantidad de números que va a introducir.
    printf("Ingrese el numero de datos:\t");
    // Lee el número ingresado por el usuario y lo almacena en la variable N.
    scanf("%d", &N);

    // Bucle for que se ejecuta N veces (de I=1 a I<=N), donde I es el contador.
    for (I = 1; I <= N; I++)
    {
        // Solicita al usuario que ingrese el dato número I.
        printf("Ingrese el dato numero %d:\t", I);
        // Lee el número ingresado por el usuario y lo almacena en la variable NUM.
        scanf("%d", &NUM);

        // Verifica si el número ingresado es positivo.
        if (NUM > 0)
            // Si el número es positivo, se suma al total acumulado en SUM.
            SUM = SUM + NUM;
    }

    // Al finalizar el bucle, muestra la suma total de los números positivos ingresados.
    printf("\nLa suma de los numeros positivos es: %d", SUM);
}
