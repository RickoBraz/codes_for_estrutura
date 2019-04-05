#include<stdio.h>
#include<conio.h>

verdadeiro() {

    printf("VERDADEIRO");

}

falso() {

    printf("FALSO");

}

nulo() {

    int op;

    printf("Escolha entre \n1-VERDADEIRO \n2-FALSO \nOpcao:	");
    scanf("%d", &op);

    switch (op) {
        case 1:
            verdadeiro();
            break;

        case 2:
            falso();
            break;

        default:
            printf("Comando Invalido");
            break;
    }

}

void main() {
    int num;

    printf("Insira um valor:	");
    scanf("%d", &num);

    if (num > 0) {

        verdadeiro();

    } else if (num < 0) {

        falso();

    } else {

        nulo();

    }

}
