#include<stdio.h>
#include<conio.h>

dobro_soma(int h1, int h2) {

    int soma;
    soma = (h1 * 2) + (h2 * 2);
    return soma;

}

void main() {

    int res, a, b;

    printf("Insira o valor de A:	");
    scanf("%d", &a);

    printf("Insira o valor de B:	");
    scanf("%d", &b);

    res = dobro_soma(a, b);
    printf("A soma do dobro dos numeros e:	%d", res);


}
