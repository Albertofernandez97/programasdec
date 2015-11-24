#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    char nombre[20];
    int contador = 0;

    scanf(" %s", &nombre);
    do{
        printf("%s", nombre);
        contador ++;
    }
        while (contador < 75);

        return EXIT_SUCCESS;
}
