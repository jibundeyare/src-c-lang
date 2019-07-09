#include <stdio.h>

int main(int argc, char * argv[]) {
    int i = 0;

    while (1) {
        if (i > 9) {
            break;
        }

        printf("%i\n", i);

        i++;
    }

    i = 0;

    while (i <= 9) {
        printf("%i\n", i);

        i++;
    }

    return 0;
}
