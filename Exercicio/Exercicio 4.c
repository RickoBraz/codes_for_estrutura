#include<stdio.h>
#include<conio.h>

#define SIZE 7


void main() {

    int i, vetor[SIZE], big = -9999, small = 9999;

    for (i = 0; i <= SIZE; i++) {

        printf("Insira um valor no vetor:	");
        scanf("%d", &vetor[i]);

        if (big < vetor[i]) {
            big = vetor[i];
        }
        
        if (small > vetor[i]) {
            small = vetor[i];
        }
        printf("%d %d", small, vetor[i]);


    }

    printf("Maior:	%d", big);
    printf("\n");
    printf("Menor:	%d", small);

}
