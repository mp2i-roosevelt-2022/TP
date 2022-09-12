#include <stdio.h>

int main(void) {

    float d, t;
    printf("Entrez le nombre de kilometres parcourus: ");
    scanf("%f", &d);
    printf("Entrez le nombre de minute: ");
    scanf("%f", &t);

    printf("Vous avez un vitesse moyenne de %f km/h\n", d / t * 60);

    return 0;
}
