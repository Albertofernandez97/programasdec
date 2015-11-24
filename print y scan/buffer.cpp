
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **agrv){
    char buffer[5];
    printf("dime algo: ");
   fgets(buffer, 4, stdin);
    return EXIT_SUCCESS;
}
