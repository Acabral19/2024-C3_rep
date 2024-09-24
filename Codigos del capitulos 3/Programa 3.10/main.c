#include <stdio.h>
#include <math.h>  // Incluimos la librería matemática para usar la función pow

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  // Variables para el contador, número de datos, número ingresado y acumuladores
    printf("Ingrese el numero de datos que se van a procesar: \t");
    scanf("%d", &N);  // Lee el número de datos a procesar

    // Verifica que N sea mayor que 0
    if (N > 0)
    {
        for(I = 1; I <= N; I++)  // Bucle para procesar N números
        {
            printf("\nIngrese el numero %d: ", I);  // Solicita al usuario que ingrese un número
            scanf("%d", &NUM);  // Lee el número ingresado

            // Verifica si el número es diferente de 0
            if (NUM)
            {
                // Verifica si el número es par usando la función pow para evaluar la paridad
                if (pow(-1, NUM) > 0)
                {
                    SPA = SPA + NUM;  // Suma los números pares
                }
                else
                {
                    SIM = SIM + NUM;  // Suma los números impares
                    CIM++;  // Incrementa el contador de números impares
                }
            }
        }

        // Muestra la suma de los números pares
        printf("\nLa suma de los numeros pares es: %d", SPA);

        // Verifica si se ingresaron números impares para evitar división por cero
        if (CIM > 0)
        {
            printf("\nEl promedio de numeros impares es: %5.2f", (float)(SIM) / CIM);  // Calcula y muestra el promedio de números impares
        }
        else
        {
            printf("\nNo se ingresaron numeros impares para calcular el promedio.");  // Mensaje si no hay números impares
        }
    }
    else
    {
        printf("\nEl valor de N es incorrecto");  // Mensaje de error si N no es positivo
    }
}
