#include <stdio.h>
#include <stdlib.h>
int main(){
    char letra = 'a';//0141, 97, 1-64 4-8-1, 0x61
    printf("Hol%i.\n", letra);
    printf("Hol%c.\n", letra);

    printf("%d.\n",27);
    printf("%x.\n", 27);
    printf("%X.\n", 27);
    printf("Hola \tcaracola\n");
    printf("tu madre es pura\bt \b \n");
    printf("%.2lf.\n",0.5);
    printf("%i\t%i\t%i.\n",5);
    printf("%i\t%i\t%i.\n",50);
    printf("%i\t%i\t%i.\n",500);

    return EXIT_SUCCESS;
}
