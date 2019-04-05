#include<stdio.h>
#include<conio.h>

fatorial(int num) {

    int i, fat;
    fat = 1;

    for (i = 1; i <= num; i++) {

        fat = (fat * i);
        printf("\nFatorial de %d:	%d", num, fat);
    }

}

void main() {

    int limit;

    printf("CALCULO DE FATORIAL\n\n");
    printf("Qual o fatorial:	");
    scanf("%d", &limit);
    fatorial(limit);

}
