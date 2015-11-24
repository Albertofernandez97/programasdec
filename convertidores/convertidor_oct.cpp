#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
#define BASE 8
    int origen;
    int destino = 0;

    printf("Número: ");

    scanf(" %i", &origen);


    do {
        destino *= 10;
        destino += origen % 10;
        origen /=10;

    } while (origen !=0) ;
    printf("%i\n", destino);

    return EXIT_SUCCESS;
}
