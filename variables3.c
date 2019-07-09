#include <stdio.h>

int main(int argc, char* argv[]) {
    int sum;
    int a;
    int b;

    printf("Stp, donnes-moi un nombre : ");
    scanf("%d", &a);

    printf("Stp, donnes-moi un autre nombre : ");
    scanf("%d", &b);

    sum = a + b;

    printf("résultat : %d + %d = %d\n", a, b, sum);

    return 0;
}
