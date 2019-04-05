#include<stdio.h>
#include<conio.h>

divisao(int a, int b) {

    int resultado, dobro;

    resultado = a;
    dobro = b;

    while (resultado != 1) {

        resultado = resultado / 2;
        dobro = dobro * 2;
        printf("\nDivisao do primeiro termpo:	%d / 2 =	%d", a, resultado);
        printf("\nDobro do segundo termo:		%d =	%d", b, dobro);
        b = dobro;
        printf("\n");
    }

}

void main() {

    int h1, h2;

    printf("Insira o valor de A:	");
    scanf("%d", &h1);

    printf("Insira o valor de B:	");
    scanf("%d", &h2);

    divisao(h1, h2);



}
