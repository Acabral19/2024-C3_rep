#include <stdio.h>

void moverDiscos(int numDiscos, char origen, char destino, char auxiliar) {
    if (numDiscos == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    moverDiscos(numDiscos - 1, origen, auxiliar, destino);
    printf("Mover disco %d de %c a %c\n", numDiscos, origen, destino);
    moverDiscos(numDiscos - 1, auxiliar, destino, origen);
}

int main() {
    int numDiscos;

    printf("Ingrese el número de discos: ");
    scanf("%d", &numDiscos);

    printf("Movimientos necesarios para resolver la Torre de Hanoi con %d discos:\n", numDiscos);
    moverDiscos(numDiscos, 'A', 'C', 'B');
    return 0;
}
