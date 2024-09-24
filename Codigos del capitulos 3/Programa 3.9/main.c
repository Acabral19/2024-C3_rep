#include <stdio.h>

void main(void)
{
    int I = 2, CAM = 1;  // I inicia en 2 para comenzar la serie, CAM se usa para alternar entre 5 y 3
    long SSE = 0;  // SSE acumula la suma de los valores de la serie

    // El bucle se ejecuta mientras I sea menor o igual a 2500
    while (I <= 2500)
    {
        SSE = SSE + I;  // Se suma el valor actual de I a la suma total SSE
        printf("\t %d", I);  // Se imprime el valor actual de I

        // Alterna entre sumar 5 y 3 a I
        if (CAM)
        {
            I += 5;  // Si CAM es 1, suma 5 a I
            CAM--;   // CAM se convierte en 0 para alternar la próxima vez
        }
        else
        {
            I += 3;  // Si CAM es 0, suma 3 a I
            CAM++;   // CAM vuelve a 1 para alternar nuevamente
        }
    }

    // Al finalizar el bucle, se imprime la suma total de la serie
    printf("\nLa suma de la serie es: %ld", SSE);
}
