#include <stdio.h>

int main(void) {
    int nombre;

    scanf("%d", &nombre);

    /*
    ** On peut aussi utiliser une structure switch
    */
    if (nombre == 0)
        printf("aucun");
    if (nombre == 1)
        printf("un");
    if (nombre == 2)
        printf("deux");
    else
        printf("plusieurs");


    printf("\n");
    return 0;
}
