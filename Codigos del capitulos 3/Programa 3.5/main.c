#include <stdio.h>  // Incluimos la librería estándar de entrada/salida

void main(void)
{
    float PAG, SPA = 0;  // Variables para el pago actual y la suma total de pagos, SPA inicializada en 0

    // Se solicita el primer pago
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);  // Se lee el pago ingresado por el usuario

    // Bucle do-while: se ejecuta al menos una vez y continúa mientras PAG no sea 0
    do
    {
        SPA = SPA + PAG;  // Suma el pago actual a la suma total SPA
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &PAG);  // Se lee el siguiente pago
    }
    while (PAG);  // El bucle se repite mientras PAG no sea 0

    // Muestra el total de los pagos realizados
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
