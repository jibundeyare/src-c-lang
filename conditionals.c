#include <stdio.h>

int main(int argc, char* argv[]) {
    int cb = 0;
    int cash = 0;

    if (cb || cash) {
        printf("oui, tu peux aller faire les courses\n");
    } else {
        printf("attention, tu n'as pas de moyen de paiement\n");
    }

    int elecIsOff = 0;
    int waterIsOff = 0;

    if (elecIsOff && waterIsOff) {
        printf("oui, tu peux partir en vacances\n");
    } else if (elecIsOff && !waterIsOff) {
        printf("attention, tu dois couper l'eau\n");
    } else if (!elecIsOff && waterIsOff) {
        printf("attention, tu dois couper l'élec\n");
    } else {
        printf("attention, ni l'eau ni l'élec ne sont coupés\n");
    }

    return 0;
}
