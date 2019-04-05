#include<stdio.h>
#include<conio.h>

mult(float h1, float h2, float h3) {

    printf("%.2f", (h1 * h2 * h3));

}

void main() {

    float a, b;

    a = 23.5;
    b = 12.9;

    mult(a, b, 3.87);

}
