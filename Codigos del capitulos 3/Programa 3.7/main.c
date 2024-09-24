#include <stdio.h>

void main(void)
{
    int I, N;  // Variables para el contador del bucle (I) y el n�mero de lanzamientos (N)
    float LAN, SLA = 0;  // Variables para cada lanzamiento (LAN) y la suma total de lanzamientos (SLA)

    // Solicita el n�mero de lanzamientos, asegur�ndose de que est� entre 1 y 11
    do
    {
        printf("Ingrese el numero de lanzamientos (entre 1 y 11):\t");
        scanf("%d", &N);  // Lee el n�mero de lanzamientos
    }
    while (N < 1 || N > 11);  // Repite mientras N no est� en el rango v�lido

    // Bucle para pedir los lanzamientos y calcular la suma de ellos
    for (I = 1; I <= N; I++)  // Corregido el bucle para incluir el �ltimo lanzamiento
    {
        printf("\nIngrese el lanzamiento %d: ", I);  // Solicita el lanzamiento I
        scanf("%f", &LAN);  // Lee el valor del lanzamiento
        SLA = SLA + LAN;  // Suma el lanzamiento actual a la suma total
    }

    SLA = SLA / N;  // Calcula el promedio de los lanzamientos

    // Muestra el promedio de lanzamientos
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}
