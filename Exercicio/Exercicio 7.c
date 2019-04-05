#include<stdio.h>
#include<conio.h>

void main() {

    char name[30];
    char number[12];
    int age;

    printf("Titulo de Eleitor");
    //limite de 30 caracteres
    printf("\n 30 caracteres");
    printf("\nNome:			");
    gets(name);

    //limite de 12 Caracteres
    printf("\n 12 Caracteres ");
    printf("\nNumero do titulo:	");
    gets(number);

    printf("\nIdade:			");
    scanf("%d", &age);


    if (age > 17 && age < 71) {
        printf("\n\no voto e obrigatorio");
    } else {
        printf("\no voto e facultativo");
    }

}
