#include <stdio.h>
#include <string.h>

void convertir_unidad(int n);
void convertir_decenas(int n);
void convertir_centenas(int n);
void convertir_miles(int n);
void convertir_millones(int n);

void convertir_numero(int numero) {
    if (numero >= 1000000) {
        convertir_millones(numero / 1000000);
        printf("millón ");
        numero %= 1000000;
    }
    if (numero >= 1000) {
        convertir_miles(numero / 1000);
        printf("mil ");
        numero %= 1000;
    }
    convertir_centenas(numero);
}

void convertir_millones(int n) {
    if (n == 1) {
        printf("un ");
    } else {
        convertir_centenas(n);
    }
}

void convertir_miles(int n) {
    if (n != 0) {
        convertir_centenas(n);
    }
}

void convertir_centenas(int n) {
    if (n >= 100) {
        switch (n / 100) {
            case 1: printf(n % 100 == 0 ? "cien " : "ciento "); break;
            case 2: printf("doscientos "); break;
            case 3: printf("trescientos "); break;
            case 4: printf("cuatrocientos "); break;
            case 5: printf("quinientos "); break;
            case 6: printf("seiscientos "); break;
            case 7: printf("setecientos "); break;
            case 8: printf("ochocientos "); break;
            case 9: printf("novecientos "); break;
        }
        n %= 100;
    }
    convertir_decenas(n);
}

void convertir_decenas(int n) {
    if (n >= 20) {
        switch (n / 10) {
            case 2: printf("veinte "); break;
            case 3: printf("treinta "); break;
            case 4: printf("cuarenta "); break;
            case 5: printf("cincuenta "); break;
            case 6: printf("sesenta "); break;
            case 7: printf("setenta "); break;
            case 8: printf("ochenta "); break;
            case 9: printf("noventa "); break;
        }
        if (n % 10 != 0) {
            printf("y ");
            convertir_unidad(n % 10);
        }
    } else {
        convertir_unidad(n);
    }
}

void convertir_unidad(int n) {
    switch (n) {
        case 1: printf("uno "); break;
        case 2: printf("dos "); break;
        case 3: printf("tres "); break;
        case 4: printf("cuatro "); break;
        case 5: printf("cinco "); break;
        case 6: printf("seis "); break;
        case 7: printf("siete "); break;
        case 8: printf("ocho "); break;
        case 9: printf("nueve "); break;
        case 10: printf("diez "); break;
        case 11: printf("once "); break;
        case 12: printf("doce "); break;
        case 13: printf("trece "); break;
        case 14: printf("catorce "); break;
        case 15: printf("quince "); break;
        case 16: printf("dieciséis "); break;
        case 17: printf("diecisiete "); break;
        case 18: printf("dieciocho "); break;
        case 19: printf("diecinueve "); break;
        default: break;
    }
}

void convertir_centavos(int centavos) {
    printf("con %d centavos", centavos);
}

int main() {
    int opcion;
    do {
        int entero, centavos;
        float numero;
        printf("\nIngrese un número : ");
        scanf("%f", &numero);

        entero = (int)numero;
        centavos = (int)((numero - entero) * 100);

        printf("En letras: ");
        convertir_numero(entero);
        convertir_centavos(centavos);
        printf("\n");

        printf("\n¿Desea convertir otro número? (1: Sí, 0: No): ");
        scanf("%d", &opcion);
    } while (opcion != 0);

    return 0;
}
