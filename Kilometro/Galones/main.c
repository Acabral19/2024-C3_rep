#include <stdio.h>

int main() {

    float consumoMinimo;
    float consumoMaximo;
    float costoCombustible;
    float costoPorKm;
    const float LITROS_POR_GALON = 3.78541;


    printf("Ingrese el consumo minimo de combustible (litros por 100 Km): ");
    scanf("%f", &consumoMinimo);

    printf("Ingrese el consumo maximo de combustible (litros por 100 Km): ");
    scanf("%f", &consumoMaximo);

    printf("Ingrese el costo del combustible (dólares por galón): ");
    scanf("%f", &costoCombustible);


    printf("\nConsumo de Combustible\tCosto por Km\n");
    printf("------------------------\t-------------\n");


    for (float consumo = consumoMinimo; consumo <= consumoMaximo; consumo += 1.0) {

        costoPorKm = (consumo / 100) * (costoCombustible / LITROS_POR_GALON);

        printf("%.2f litros/100 Km\t\t$%.4f por Km\n", consumo, costoPorKm);
    }

    return 0;
}
