#include <stdio.h>

void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;  // Contadores para las diferentes categorías de calificaciones
    float CAL;  // Variable para almacenar la calificación ingresada

    // Solicita al usuario que ingrese la calificación
    printf("Ingresa la calificación del alumno: ");
    scanf("%f", &CAL);  // Lee la calificación

    // Bucle que se ejecuta mientras la calificación no sea -1
    while (CAL != -1)
    {
        // Clasificación de la calificación en rangos
        if (CAL < 4)
            R1++;  // Incrementa el contador para calificaciones entre 0 y 3.99
        else if (CAL < 6)
            R2++;  // Incrementa el contador para calificaciones entre 4 y 5.99
        else if (CAL < 8)
            R3++;  // Incrementa el contador para calificaciones entre 6 y 7.99
        else if (CAL < 9)
            R4++;  // Incrementa el contador para calificaciones entre 8 y 8.99
        else
            R5++;  // Incrementa el contador para calificaciones entre 9 y 10

        // Solicita nuevamente al usuario que ingrese la calificación
        printf("Ingresa la calificación del alumno: ");
        scanf("%f", &CAL);  // Lee la nueva calificación
    }

    // Muestra el resultado de las calificaciones
    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10   = %d", R5);
}
