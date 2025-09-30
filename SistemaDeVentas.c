#include <stdio.h>

int main(int argc, char *argv[])
{

    // Declaración de variables:

    int ventas, total, stock;
    int opc1, opc2;

    //Menu principal del sistema
    do
    {
        printf("\nSeleccione la opción deseada");
        printf("\n1) Comprar");
        printf("\n2) Salir");
        printf("\n>>> ");
        scanf("%d", &opc1);

        switch (opc1)
        {
        case 1:
            /* code */
            break;
        case 2:
            printf("\nMuchas gracias por usar nuestro sistema. Saliendo...");
            break;
        default:
        printf("\nOpcion invalida, intente de nuevo");
            break;
        }

    } while (opc1 != 2);
}