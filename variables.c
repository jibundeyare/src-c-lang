// import de fonctionnalités d'une librairie
#include <stdio.h>

// argc : argument count
// argv : argument vector
int main(int argc, char* argv[]) {
    // affichage du nombre d'arguments du programme
    printf("nombre d'arguments: %i\n", argc);

    // déclarations de variables de type integer et affectations de valeurs
    int sum;
    int a = 2;
    int b = 3;

    // operation arithmétique et affectation du résultat à une variable
    sum = a + b;

    // affichage de variables de type integer
    printf("sum: %i + %i = %i\n", a, b, sum);

    // déclarations de variables de type float et affectations de valeurs
    float pi = 3.14;
    float phi = 1.61;
    float average;

    // operation arithmétique et affectation du résultat à une variable
    average = (pi + phi) / 2;

    // affichage de variables de type float
    printf("average: %1.2f\n", average);

    return 0;
}
