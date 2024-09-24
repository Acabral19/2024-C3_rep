#include <stdio.h>

void main(void)
{
    int I, MAT, MAMAT, MEMAT;  // MAT: matrícula actual, MAMAT: matrícula del alumno con mejor promedio, MEMAT: matrícula del alumno con peor promedio
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;  // SUM: suma de calificaciones, PRO: promedio, CAL: calificación actual

    printf("Ingrese la matrícula del primer alumno:\t");
    scanf("%d", &MAT);  // Lee la matrícula del primer alumno

    while (MAT)  // Bucle que continúa hasta que se ingresa una matrícula de 0
    {
        SUM = 0;  // Reinicia la suma de calificaciones para el nuevo alumno
        for (I = 1; I <= 5; I++)  // Bucle para ingresar 5 calificaciones
        {
            printf("\tIngrese la calificación del alumno %d:\t", I);  // Indica cuál calificación se va a ingresar
            scanf("%f", &CAL);  // Lee la calificación del alumno
            SUM += CAL;  // Suma la calificación
        }

        PRO = SUM / 5;  // Calcula el promedio de las calificaciones
        printf("\nMatrícula:%d\tPromedio:%5.2f", MAT, PRO);  // Muestra la matrícula y el promedio

        // Verifica si el promedio es el mejor encontrado hasta ahora
        if (PRO > MAPRO)
        {
            MAPRO = PRO;  // Actualiza el mejor promedio
            MAMAT = MAT;  // Actualiza la matrícula del alumno con el mejor promedio
        }

        // Verifica si el promedio es el peor encontrado hasta ahora
        if (PRO < MEPRO)
        {
            MEPRO = PRO;  // Actualiza el peor promedio
            MEMAT = MAT;  // Actualiza la matrícula del alumno con el peor promedio
        }

        printf("\n\nIngrese la matrícula del siguiente alumno (0 para terminar): ");
        scanf("%d", &MAT);  // Lee la matrícula del siguiente alumno
    }

    // Muestra el alumno con el mejor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\tPromedio: %5.2f", MAMAT, MAPRO);
    // Muestra el alumno con el peor promedio
    printf("\n\nAlumno con peor Promedio:\t%d\tPromedio: %5.2f", MEMAT, MEPRO);
}
