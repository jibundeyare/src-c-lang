#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int sum;
    const char a[100];
    const char b[100];

    printf("Stp, donnes-moi un nombre : ");
    scanf("%s", &a);

    printf("Stp, donnes-moi un autre nombre : ");
    scanf("%s", &b);

    sum = atoi(a) + atoi(b);

    printf("résultat : %d + %d = %d\n", atoi(a), atoi(b), sum);

    return 0;
}
