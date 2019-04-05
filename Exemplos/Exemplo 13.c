#include<stdio.h>
#include<conio.h>

troca(int a, int b) {

    int x;
    x = a;
    a = b;
    b = x;

    printf("\nO Valor de A:	%d", a);
    printf("\nO Valor de B:	%d", b);
    return (0);

}

void main() {

    int h1, h2;
    printf("Informe o valor de A:	");
    scanf("%d", &h1);
    printf("Informe o valor de B:	");
    scanf("%d", &h2);

    troca(h1, h2);

}
