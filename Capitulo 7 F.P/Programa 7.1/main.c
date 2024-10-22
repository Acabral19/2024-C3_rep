#include <stdio.h>


void main (void)
{
    char P1, P2, P3 = '$';
    printf("\nIngrese un caracter: ");
    P1=getchar();
    putchar(P1);
    printf("\n");
    fflush(stdin);
    printf("\nEl caracter P3 es: ");
    putchar(P3);
    printf("\n");
    printf("\nIngrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &P2);
    printf("%c", P2);


}
