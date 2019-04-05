#include<stdio.h>
#include<conio.h>

void main() {

    int age;

    printf("Qual a sua idade?	");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\nadulto");
    }
}
