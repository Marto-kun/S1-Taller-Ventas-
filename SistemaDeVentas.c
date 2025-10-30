#include <stdio.h>
#include <stdbool.h>
#include "funciones.h"

// Declaración de variables:
int precioUn, totalVenta, stock, prodId, sumStock; // Variables del programa
int opc1;                                          // Variables del menu
char prod[20];                                     // Limitar los caracteres del nombre del producto
bool registro = false;                             // Variable para verificar si hay un producto registrado

// Declaracion de funciones
void ConsultaStock(registro, stock); // Funcion caso 2
void Reabastecer(registro, sumStock, stock);   // Funcion caso 3
void Venta(registro, totalVenta, stock, precioUn);         // Funcion caso 4

int main()
{

    // Menu principal del sistema
    do
    {
        printf("\n\nSeleccione la opcion deseada");
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
        case 1:                   // Registro del producto
            if (registro == true) // Validar si el prodcuto ya fue registrado
            {
                printf("\nProducto ya registrado, no se pueden registrar nuevos productos. Regresando al menu principal...");
            }
            else
            {
                // Nombre del producto
                printf("\nIngrese nombre del producto (max 20 carac.): ");
                fflush(stdin);
                scanf("%19s", prod);

                // ID del producto

                printf("\nIngrese la ID del producto: ");
                fflush(stdin);
                scanf("%i", &prodId);

                // Stock inicial
                do
                {
                    printf("\nIngrese la cantidad de stock inicial del producto (debe ser mayor a 0): ");
                    fflush(stdin);
                    scanf("%i", &stock);
                } while (stock <= 0);

                // Precio unitario
                do
                {
                    printf("\nIngrese el precio unitario del producto (debe ser mayor a 0): ");
                    fflush(stdin);
                    scanf("%i", &precioUn);
                } while (precioUn <= 0);

                registro = true;
                printf("Producto registrado exitosamente.");
                break;
            }
            break;

        case 2: // Consulta de Stock
            ConsultaStock(registro, stock);
            break;

        case 3: // Reabastecimiento de Stock
            Reabastecer(registro, sumStock, stock);
            break;

        case 4: // Venta del producto
            Venta(registro, totalVenta, stock, precioUn);
            break;

        case 5: // Salida del programa
            printf("\nMuchas gracias por usar nuestro sistema. Saliendo...");
            break;

        default: // Ingreso inválido
            printf("\nOpcion invalida, intente de nuevo");
            break;
        }

    } while (opc1 != 5);
}

