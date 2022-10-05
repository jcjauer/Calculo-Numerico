#include "Metodos.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float f(float x) {
    float y;

    float L = 5;
    float t = 0.05;
    float C = 0.0001;


    y = x / exp(R*t) * cos(sqrt(1/(5*C) - pow(R/(2*L), 2)) * t);
    
    return y;
}

int main () {
    int imax;
    float a, b, erro;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor do erro: ");
    scanf("%f", &erro);
    printf("Digite o valor maximo de iteracoes imax: ");
    scanf("%d", &imax);

    printf("O valor de a: %f\n", a);
    printf("O valor de b: %f\n", b);
    printf("O valor de erro: %f\n", erro);
    printf("O valor maximo de iteracoes imax: %d\n", imax);

    bisseccao(a, b, erro, imax, f);

    return EXIT_SUCCESS;
}