#include <stdio.h>

int main(int argc, char * argv[]) {
    int condition = 1;

    while (1) {
        if (condition > 10) {
            break;
        }

        printf("ok\n");

        // condition = condition + 1;
        condition++;
    }

    return 0;
}
