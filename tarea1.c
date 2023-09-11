//Miguel Valladares

#include <stdio.h>

int main() {

    float n1, n2, n3, promedio;

    printf("Ingrese la Nota 1: ");
    scanf("%f", &n1);

    printf("Ingrese la Nota 2: ");
    scanf("%f", &n2);

    printf("Ingrese la Nota 3: ");
    scanf("%f", &n3);


    promedio = (0.40 * n1) + (0.30 * n2) + (0.30 * n3);

    printf("El promedio ponderado es: %.3f\n", promedio);

    return 0;
}