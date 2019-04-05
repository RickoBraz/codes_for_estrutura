#include <stdio.h>
#include<conio.h>
#include<math.h>

dobro(int num) {
    int resultado;

    resultado = num * 2;

    return (resultado);
}

quadrado(int num) {
    int resultado;

    resultado = pow(num, 2);

    return (resultado);

}

divisao(int n1, int n2) {
    float resultado;

    resultado = n1/n2;
    printf("%f",resultado);

    return (resultado);
}

resto(int n1, int n2) {
    float resultado;

    resultado = n1%n2;
    
    return (resultado);
}

void main() {

    int a, b;
    double d, r;
    printf("informe um valor para A:	");
    scanf("%d", &a);
    printf("\ninforme um valor para B:	");
    scanf("%d", &b);
    printf("\n");
    printf("\nDobro de %d:		%d", a, dobro(a));
    printf("\nDobro de %d:		%d", b, dobro(b));
    printf("\nO quadrado de %d:	%d", a, quadrado(a));
    printf("\nO Quadrado de %d:	%d", b, quadrado(b));
    d = divisao(a,b);
    printf("\n%d / %d =		%f", a, b, d);
    r = resto(a, b);
    printf("\nResto de %d / %d:	%f", a, b, r);

}
