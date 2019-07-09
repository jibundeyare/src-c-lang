#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // challenge
    // récupérer tous les arguments fournis en ligne de commande
    // afficher pour chaque argument, s'il est :
    // - plus grand que 5
    // - plus petit que 5
    // - ou égal à 5
    //
    // utiliser cette commande pour lancer le programme :
    //
    //     bin/challenge 1 3 6 5
    //
    // ou celle-ci qui génère des nombres aléatoires :
    //
    //     bin/challenge $(((RANDOM % 10) + 1)) $(((RANDOM % 10) + 1))
    //

    int i;
    int x;

    for (i = 1; i < argc; i++) {
        x = atoi(argv[i]);

        if (x < 5) {
            printf("%d est plus petit que 5\n", x);
        } else if (x > 5) {
            printf("%d est plus grand que 5\n", x);
        } else {
            printf("%d est égal à 5\n", x);
        }
    }

    return 0;
}
