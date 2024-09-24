#include <stdio.h>  // Se incluye la librería estándar de entrada/salida

void main(void)
{
    float PAG, SPA;  // Declaración de variables para el pago actual y la suma acumulada de pagos
    SPA = 0;  // Inicializamos la variable SPA en 0, que guardará la suma total de los pagos

    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);  // Se lee el primer pago ingresado por el usuario

    // Mientras el valor ingresado para PAG no sea 0, el bucle continuará
    while (PAG)
    {
        SPA = SPA + PAG;  // Se suma el pago actual a la suma acumulada SPA
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &PAG);  // Se solicita al usuario el siguiente pago
    }

    // Al terminar el bucle, se muestra el total de los pagos acumulados
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
