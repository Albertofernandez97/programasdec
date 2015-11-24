#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo;
    int mes, anio;
    //int* a;int *a; a va a coger la dirección de un entero.char *a[12] lista de doce.
   const char *MES[12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    };
    printf("¿cuanto dinero tienes?\n");
    printf("yo=<cantidad>\n");

    scanf(" yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de naciimiento (dd/mm/aa): ");
    scanf(" %*i/%i/%i", &mes, &anio);
    printf("naciste en  %s de %i.\n", MES[mes-1], anio);
    return EXIT_SUCCESS;
}
