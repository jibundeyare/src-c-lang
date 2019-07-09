#include <stdio.h>

int main(int argc, char* argv[]) {
    float sum;
    float a;
    float b;

    printf("Stp, donnes-moi un float : ");
    scanf("%f", &a);

    printf("Stp, donnes-moi un autre float : ");
    scanf("%f", &b);

    sum = a + b;

    printf("résultat : %1.2f + %1.2f = %1.2f\n", a, b, sum);

    return 0;
}
