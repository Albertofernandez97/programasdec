#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    pf = fopen ("escrito.txt", "w");

    fprintf(pf, "He sido escrito automáticamente.\n");
    fclose(pf);
    return EXIT_SUCCESS;
}
