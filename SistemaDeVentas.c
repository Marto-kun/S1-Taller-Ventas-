#include <stdio.h>

/*
Hace falta colocar validaciones en los ingresos de datos
           Agregar el caso 4 para vender el producto
*/

int main(int argc, char *argv[])
{

    // Declaración de variables:
    int precioUn, totalVenta, stock, prodId, sumStock; // Variables del programa
    int opc1;                                          // Variables del menu
    char prod[20];                                     // Limitar los caracteres del nombre del producto

    // Menu principal del sistema
    do
    {
        printf("\nSeleccione la opcion deseada");
        printf("\n1) Registrar producto");
        printf("\n2) Consultar Stock");
        printf("\n3) Reabastecer Stock");
        printf("\n4) Vender");
        printf("\n5) Salir");
        printf("\n>>> ");
        fflush(stdin);
        scanf("%d", &opc1);

        switch (opc1)
        {
        case 1: // Registro del producto
            // Nombre del producto
            printf("\nIngrese nombre del producto (max 20 carac.): ");
            fflush(stdin);
            scanf("%19s", &prod);

            // ID del producto
            printf("\nIngrese la ID del producto: ");
            fflush(stdin);
            scanf("%i", &prodId);

            // Stock inicial
            printf("\nIngrese la cantidad de stock inicial del producto: ");
            fflush(stdin);
            scanf("%i", &stock);

            // Precio unitario
            printf("\nIngrese el precio unitario del producto (debe ser mayor a 0): ");
            fflush(stdin);
            scanf("%i", &precioUn);
            break;

        case 2: // Consulta de Stock
            printf("\nEl stock actual del producto es: %i", stock);
            break;

        case 3: // Reabastecimiento de Stock
            printf("\nIngrese la cantidad que desea añadir al stock (debe ser mayor a 0): ");
            fflush(stdin);
            scanf("%i", &sumStock);
            break;

        // Agregar caso 4 para la venta del producto

        case 5: // Salida del programa
            printf("\nMuchas gracias por usar nuestro sistema. Saliendo...");
            break;

        default: // Ingreso inválido
            printf("\nOpcion invalida, intente de nuevo");
            break;
        }

    } while (opc1 != 5);
}