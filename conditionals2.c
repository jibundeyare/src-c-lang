#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // demander le nombre a avec scanf()
    // demander le nombre b avec scanf()
    // comparer a et b et afficher avec printf() si :
    // - a est plus grand que b
    // - b est plus grand que a
    // - a et b sont identiques

    int a;
    int b;

    printf("entrez un nombre a : ");
    scanf("%d", &a);

    printf("entrez un nombre b : ");
    scanf("%d", &b);

    printf("a : %d\n", a);
    printf("b : %d\n", b);

    if (a > b) {
        printf("a est plus grand que b\n");
    }

    if (a < b) {
        printf("a est plus petit que b\n");
    }

    if (a == b) {
        printf("a et b sont identiques\n");
    }

    if (a > b) {
        printf("a est plus grand que b\n");
    } else if (a < b) {
        printf("a est plus petit que b\n");
    } else {
        printf("a et b sont identiques\n");
    }

    return 0;
}
