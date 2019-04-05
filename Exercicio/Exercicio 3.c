#include<stdio.h>
#include<conio.h>

void main() {

    int i, j, line, column, matriz[line][column];

    printf("informe quantas linhas tem a matriz:	");
    scanf("%d", &line);
    printf("informe quantas colunas tem a matriz:	");
    scanf("%d", &column);

    for (i = 0; i < line; i++) {
        for (j = 0; j < column; j++) {

            printf("0");
            printf(" ");
        }
        printf("\n");
    }
}
