#include <stdio.h>

int main(void) {
    int nb1 = 0, nb2 = 0, max = 0;

    printf("Entrez les deux nombres séparés par un espace");

    scanf("%d %d", &nb1, &nb2);

    // On peut aussi utiliser l'operateur ternaire (pas au programme)
    if (nb1 > nb2)
        max = nb1;
    else
        max = nb2;

    printf("Le plus grand est %d", max);

    return 0;
}
