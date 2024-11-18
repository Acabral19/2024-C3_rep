#include <stdio.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;
void escribe(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "W")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);

}

void escribe(FILE *ap)
{
    alumno alu;
    int i = 0, r;
    printf("\n�Desea ingresar informacion sobre alumnos? (si-1 No-0: ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Matricula del alumno %d; ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        fflush(stdin);
        gets(alu.nombre);
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n�Desea ingresar informacion sobre mas alumnos? (Si-1 No-0): ");

    }
}
