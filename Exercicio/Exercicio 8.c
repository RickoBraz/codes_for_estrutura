#include<stdio.h>
#include<conio.h>

dobro(int num) {
    int resultado;

    resultado = num * 2;

    return (resultado);
}

comparacao() {
    printf("\nO Numero esta entre 10 e 100 - intervalo permitido");
    return 0;
}

diferenca(int n1, int n2) {
    int resultado;

    resultado = n1 - n2;

    return (resultado);
}

void main() {

    int a, b;

    printf("informe os valoeres\n");
    printf("\nA:	");
    scanf("%d", &a);
    printf("\nB:	");
    scanf("%d", &b);

    if (a > 0) {
        printf("Dobro de %d:	%d\n", a, dobro(a));
    }

    if (b > 10 && b < 100) {
        comparacao();
    }

    if (a > b) {

        printf("\nA diferenca entre a e b e:	%d", diferenca(a, b));
    } else {
        printf("\n%d", a + 1);
    }


}
