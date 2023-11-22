#include "funciones.h"

int main(void){

    char nombre[50];
    char cantidad[50];
    char precio[50];
    char codigo[50];
    
    //Arrays
    char arrayNombres[5][50];
    char arrayCantidad[5][50];
    char arrayPrecio[5][50];
    char arrayCodigo[5][50];

    //Indices Arrays
    int indiceArray = 0;

    //Variables auxiliares
    int cantItems, auxCantItems, selector;

    //Menu
    do{

        printf("\tMenu\n\n1.Agregar items\n2.Modificar items\n3.Eliminar items\n4.Calcular total\n5.Salir\n\n");
        printf("Seleccione una opcion: ");
        selector = validacion();
        system("clear");
        switch(selector){

        case 1:
            printf("Agregar items\n");
            //Validación de la cantidad de items
            printf("Ingrese la cantidad de items: ");
            cantItems = validacion();
            auxCantItems = cantItems;

            do{

                ingresoDatos(nombre, cantidad, precio, codigo);

                strcpy(arrayNombres[indiceArray], nombre);
                strcpy(arrayCantidad[indiceArray], cantidad);
                strcpy(arrayPrecio[indiceArray], precio);
                strcpy(arrayCodigo[indiceArray], codigo);
                        
                indiceArray++;
                auxCantItems--;
            }while(auxCantItems > 0);
            

            break;
        case 2:
            printf("Modificar items\n");
            break;
        case 3:
            printf("Eliminar items\n");
            break;
        case 4:
            printf("Mostrar items\n");

            for(size_t i = 0; i < cantItems; i++){

                printf("%s %s %s %s\n", arrayNombres[i], arrayCantidad[i], arrayPrecio[i], arrayCodigo[i]);
            }
            break;
        case 5:
            printf("Salir\n");
            break;
        default:
            printf("Opcion no valida\n");

            break;
        }
        
        system("pause");
        system("clear");
    }while(selector != 5);
    
    return 0;
}