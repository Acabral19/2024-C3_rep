#include <stdio.h>

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;  // Variables para contar los votos de cada candidato y nulos
    float PO1, PO2, PO3, PO4, PO5, PON;  // Variables para calcular los porcentajes

    printf("Ingrese el primer voto (1-5 para candidatos, 0 para terminar): ");
    scanf("%d", &VOT);  // Lee el primer voto

    // Bucle que se ejecuta mientras se ingresen votos diferentes de 0
    while (VOT != 0)
    {
        switch (VOT)  // Verifica el valor del voto
        {
            case 1: C1++; break;  // Incrementa el contador del candidato 1
            case 2: C2++; break;  // Incrementa el contador del candidato 2
            case 3: C3++; break;  // Incrementa el contador del candidato 3
            case 4: C4++; break;  // Incrementa el contador del candidato 4
            case 5: C5++; break;  // Incrementa el contador del candidato 5
            default: NU++; break;  // Incrementa el contador de votos nulos
        }

        printf("Ingrese el siguiente voto �0 para terminar�: ");
        scanf("%d", &VOT);  // Lee el siguiente voto
    }

    // Calcula el total de votos
    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    // Calcula los porcentajes para cada candidato y votos nulos
    PO1 = ((float)C1 / SVO) * 100;
    PO2 = ((float)C2 / SVO) * 100;
    PO3 = ((float)C3 / SVO) * 100;
    PO4 = ((float)C4 / SVO) * 100;
    PO5 = ((float)C5 / SVO) * 100;
    PON = ((float)NU / SVO) * 100;

    // Muestra el total de votos y los resultados
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f%%", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f%%", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f%%", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f%%", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f%%", C5, PO5);
    printf("\nNulos:       %d votos -- Porcentaje: %5.2f%%", NU, PON);
}
