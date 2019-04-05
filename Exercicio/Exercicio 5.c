#include<stdio.h>
#include<conio.h>

soma() {
    int a, b, resultado;
    printf("\n");
    printf("Informe o valor de A:	");
    scanf("%d", &a);
    printf("informe o valor de B:	");
    scanf("%d", &b);
    resultado = a + b;
    printf("%d + %d = %d", a, b, resultado);
    return 0;
}

subtracao() {
    int a, b, resultado;
    printf("\n");
    printf("Informe o valor de A:	");
    scanf("%d", &a);
    printf("informe o valor de B:	");
    scanf("%d", &b);
    resultado = a - b;
    printf("%d - %d = %d", a, b, resultado);
    return 0;

}

multiplicacao() {
    int a, b, resultado;
    printf("\n");
    printf("Informe o valor de A:	");
    scanf("%d", &a);
    printf("informe o valor de B:	");
    scanf("%d", &b);
    resultado = a * b;
    printf("%d * %d = %d", a, b, resultado);
    return 0;
}

divisao() {
    float a, b, resultado;
    printf("\n");
    printf("Informe o valor de A:	");
    scanf("%f", &a);
    printf("informe o valor de B:	");
    scanf("%f", &b);
    resultado = a / b;
    printf("%f / %f = %f", a, b, resultado);
    return 0;
}

void main() {

    int resultado, op;

    while (op != 0) {

        printf("\nCalculadora\n\n");
        printf("1-Adicao \n2-Subtracao \n3-Multiplicacao \n4-Divisao \n0-Sair \nOpcao:	");
        scanf("%d", &op);

        switch (op) {

            case 1:
                resultado = soma();
                printf("\n");
                break;
            case 2:
                printf("\n");
                resultado = subtracao();

                break;
            case 3:
                printf("\n");
                resultado = multiplicacao();
                break;
            case 4:
                printf("\n");
                resultado = divisao();
                break;
            default:
            case 0:
                break;
                printf("\n");
                printf("Comando inv�lido");
                break;
        }
    }

    printf("O Programa sera encerrado");

}
