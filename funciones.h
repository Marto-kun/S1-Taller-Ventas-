#include <stdio.h>


// Codificacion de Funciones
void ConsultaStock(bool registro, int stock)
{
    if (registro == false) // Verificacion de existencia de producto
    {
        printf("\nNo se ha registrado ningun producto... Regresando al menu principal...");
    }
    else
    {
        printf("\nEl stock actual del producto es: %i", stock);
    }
}

void Reabastecer(bool registro, int sumStock, int stock)
{
    if (registro == false) // Verificacion de existencia de producto
    {
        printf("\nNo se ha registrado ningun producto... Regresando al menu principal...");
    }
    else
    {
        do
        {
            printf("\nIngrese la cantidad que desea añadir al stock (debe ser mayor a 0): ");
            fflush(stdin);
            scanf("%i", &sumStock);

        } while (sumStock <= 0);

        stock += sumStock;
        printf("Stock actualizado existosamente. Nuevo Stock: %i", stock);
    }
}

void Venta(bool registro, int totalVenta, int stock, float precioUn)
{
    if (registro == false) // Verificacion de existencia de producto
    {
        printf("\nNo se ha registrado ningun producto... Regresando al menu principal...");
    }
    else
    {
        do
        {
            printf("\nIngrese la cantidad que desea vender: ");
            fflush(stdin);
            scanf("%i", &totalVenta);
            if (totalVenta <= 0)
            {
                printf("\nCantidad inválida. Debe ser mayor a 0.");
            }
        } while (totalVenta <= 0);

        while (stock < totalVenta)
        {
            printf("\nNo hay suficiente stock para realizar la venta.");
            printf("\nIntentelo de nuevo...");
            printf("\nIngrese la cantidad que desea vender: ");
            fflush(stdin);
            scanf("%i", &totalVenta);
        }

        stock -= totalVenta;
        printf("\nVenta realizada exitosamente.");
        printf("\nGanancia obtenida: $%i", totalVenta * precioUn);
    }
}