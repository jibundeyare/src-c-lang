#include <stdio.h>

int main(int argc, char* argv[]) {
    const char * myText = "Hello World!";

    // variante
    const char myText2[]= "Hello World!";

    printf("%s\n", myText);

    const char name[255];
    printf("Entrez votre nom\n");
    scanf("%s", &name);
    printf("Bonjour %s\n", name);

    return 0;
}
