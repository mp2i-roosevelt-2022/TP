#include <stdio.h>

int main(int argc, char *argv[]) {
    int nb1 = 0, nb2 = 0, max = 0;
    printf("Entrez les deux nombres séparés par un espace");
    scanf("%d %d", &nb1, &nb2);
    max =  (nb1 > nb2) ? nb1 : nb2;
    printf("Le plus grand est %d", max);
    return 0;
}
