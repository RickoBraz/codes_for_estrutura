#include<stdio.h>
#include<conio.h>

//receber dois n�meros inteiros
//retornar 3 valores 
// 1-dobro 2-multiplca��o entre eles 
//3-se o resultado da multiplica��o � possitivo ou negativo

void main() {

    int m, h;

    printf("Insira o valor de M:	");
    scanf("%d", &m);

    printf("\nInsira o valor de H:	");
    scanf("%d", &h);

    printf("\nO Dobra de M:	%d\nO Dobrao de H:	%d", m * 2, h * 2);

    printf("\nM x H = %d", m * h);

    if ((m * h) >= 0) {
        printf("\nPositivo");
    } else {
        printf("\nNegativo");
    }

}
