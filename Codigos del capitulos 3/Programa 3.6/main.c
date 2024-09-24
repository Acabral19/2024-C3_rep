#include <stdio.h>  // Librer�a est�ndar de entrada/salida

void main(void)
{
    int I = 0;  // Contador para el n�mero de salarios ingresados
    float SAL, PRO, NOM = 0;  // Variables para el salario, promedio y n�mina (suma total de salarios)

    // Solicitar el primer salario
    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &SAL);  // Leer el primer salario ingresado

    // Bucle do-while: contin�a mientras SAL no sea 0
    do
    {
        NOM = NOM + SAL;  // Sumar el salario actual a la n�mina total
        I = I + 1;  // Incrementar el contador de profesores
        // Solicitar el siguiente salario o ingresar 0 para terminar
        printf("Ingrese el salario del profesor -0 para terminar-:\t");
        scanf("%f", &SAL);  // Leer el salario siguiente
    }
    while (SAL);  // El bucle se repite hasta que SAL sea 0

    PRO = NOM / I;  // Calcular el promedio de los salarios

    // Mostrar la n�mina total y el promedio de salarios
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);
}
