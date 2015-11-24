#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *agrv){
FILE *pf;
    pf = fopen("lyrics.txt", "w");

  fprintf(pf, "eeeee");
  fclose(pf);
    return EXIT_SUCCESS;
}
