#include <stdio.h>
#include <stdlib.h>

int main(){
  char name[0x20];

  printf("dime tu nombre: ");
  gets(name);
  printf("%s, y te haré reina de un jardín de rosas. \n", name);
    return EXIT_SUCCESS;
}
