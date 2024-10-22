#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char P1;
    printf("\nIngrese un caracter para analizar si este es un digito: ");
    P1 = getchar();
    if (isdigit (P1))
        printf("%c es un digito \n" , P1);
    else
        printf("%c no es un digito \n", P1);
    fflush(stdin);
    printf("\nIngrese un caracter para examinar si este es una letra minuscula: ");
    P1 = getchar();
    if (isalpha(P1))
        if (islower (P1))
        printf("%c es una letra minuscula \n", P1);
    else
        printf("%c no es una letra minuscula \n", P1);
    else
        printf("%c no es una letra \n" , P1);
    fflush(stdin);
    printf("\nIngrese una letra para convertirla de mayuscula a minuscula: ");
    P1 = getchar();
    if (isalpha (P1))
        if (isupper (P1))
        printf("%c fue convertir de mayuscula a minuscula \n", tolower(P1));
    else
        printf("%c es una letra minuscula \n", P1);
    else
        printf("%c no es una letra \n", P1);
}

