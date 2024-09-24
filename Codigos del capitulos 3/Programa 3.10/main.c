#include <stdio.h>
#include <math.h>  // Incluimos la librer�a matem�tica para usar la funci�n pow

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  // Variables para el contador, n�mero de datos, n�mero ingresado y acumuladores
    printf("Ingrese el numero de datos que se van a procesar: \t");
    scanf("%d", &N);  // Lee el n�mero de datos a procesar

    // Verifica que N sea mayor que 0
    if (N > 0)
    {
        for(I = 1; I <= N; I++)  // Bucle para procesar N n�meros
        {
            printf("\nIngrese el numero %d: ", I);  // Solicita al usuario que ingrese un n�mero
            scanf("%d", &NUM);  // Lee el n�mero ingresado

            // Verifica si el n�mero es diferente de 0
            if (NUM)
            {
                // Verifica si el n�mero es par usando la funci�n pow para evaluar la paridad
                if (pow(-1, NUM) > 0)
                {
                    SPA = SPA + NUM;  // Suma los n�meros pares
                }
                else
                {
                    SIM = SIM + NUM;  // Suma los n�meros impares
                    CIM++;  // Incrementa el contador de n�meros impares
                }
            }
        }

        // Muestra la suma de los n�meros pares
        printf("\nLa suma de los numeros pares es: %d", SPA);

        // Verifica si se ingresaron n�meros impares para evitar divisi�n por cero
        if (CIM > 0)
        {
            printf("\nEl promedio de numeros impares es: %5.2f", (float)(SIM) / CIM);  // Calcula y muestra el promedio de n�meros impares
        }
        else
        {
            printf("\nNo se ingresaron numeros impares para calcular el promedio.");  // Mensaje si no hay n�meros impares
        }
    }
    else
    {
        printf("\nEl valor de N es incorrecto");  // Mensaje de error si N no es positivo
    }
}
