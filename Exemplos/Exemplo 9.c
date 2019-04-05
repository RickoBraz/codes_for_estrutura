#include<stdio.h>
#include<conio.h>
#include<math.h>

quadrado(int h) {

    printf("O quadrado de %d e: %d",h,h *h);

}

void main() {

    int num;

    printf("Informe um valor:	");
    scanf("%d", &num);

    printf("\n\n");

    quadrado(num);

}
