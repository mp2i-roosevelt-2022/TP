#include <stdio.h>

int main(int argc, char *argv[]) {
    int numero;
    scanf("%d", &numero);
    if (numero == 2)
        printf("Bonjour Madame.\n");
    else if (numero == 1)
        printf("Bonjour Monsieur.\n");
    else
        printf("Bonjour Alien. \n");
    return 0;
}
