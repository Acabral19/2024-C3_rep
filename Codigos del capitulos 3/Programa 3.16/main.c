#include <stdio.h>

void main(void)
{
    int I, MAT, MAMAT, MEMAT;  // MAT: matr�cula actual, MAMAT: matr�cula del alumno con mejor promedio, MEMAT: matr�cula del alumno con peor promedio
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;  // SUM: suma de calificaciones, PRO: promedio, CAL: calificaci�n actual

    printf("Ingrese la matr�cula del primer alumno:\t");
    scanf("%d", &MAT);  // Lee la matr�cula del primer alumno

    while (MAT)  // Bucle que contin�a hasta que se ingresa una matr�cula de 0
    {
        SUM = 0;  // Reinicia la suma de calificaciones para el nuevo alumno
        for (I = 1; I <= 5; I++)  // Bucle para ingresar 5 calificaciones
        {
            printf("\tIngrese la calificaci�n del alumno %d:\t", I);  // Indica cu�l calificaci�n se va a ingresar
            scanf("%f", &CAL);  // Lee la calificaci�n del alumno
            SUM += CAL;  // Suma la calificaci�n
        }

        PRO = SUM / 5;  // Calcula el promedio de las calificaciones
        printf("\nMatr�cula:%d\tPromedio:%5.2f", MAT, PRO);  // Muestra la matr�cula y el promedio

        // Verifica si el promedio es el mejor encontrado hasta ahora
        if (PRO > MAPRO)
        {
            MAPRO = PRO;  // Actualiza el mejor promedio
            MAMAT = MAT;  // Actualiza la matr�cula del alumno con el mejor promedio
        }

        // Verifica si el promedio es el peor encontrado hasta ahora
        if (PRO < MEPRO)
        {
            MEPRO = PRO;  // Actualiza el peor promedio
            MEMAT = MAT;  // Actualiza la matr�cula del alumno con el peor promedio
        }

        printf("\n\nIngrese la matr�cula del siguiente alumno (0 para terminar): ");
        scanf("%d", &MAT);  // Lee la matr�cula del siguiente alumno
    }

    // Muestra el alumno con el mejor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\tPromedio: %5.2f", MAMAT, MAPRO);
    // Muestra el alumno con el peor promedio
    printf("\n\nAlumno con peor Promedio:\t%d\tPromedio: %5.2f", MEMAT, MEPRO);
}
