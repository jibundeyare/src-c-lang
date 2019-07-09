#include <stdio.h>

int main(int argc, char * argv[]) {
    int i = 10;

    while (1) {
        if (i < 1) {
            break;
        }

        printf("%i\n", i);

        i--;
    }

    i = 10;

    while (i >= 1) {
        printf("%i\n", i);

        i--;
    }

    return 0;
}
