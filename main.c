#include "funciones.h"

int main(void){

    char nombre[50];
    char cantidad[50];
    char precio[50];
    char codigo[50];
    
    //Matrices
    char arrayNombres[5][50];
    char arrayCantidad[5][50];
    char arrayPrecio[5][50];
    char arrayCodigo[5][50];

    //Variables auxiliares
    int cantItems, auxCantItems, selector;
    int codigoInt, i;

    //Menu
    do{

        printf("\tMenu\n\n1.Agregar items\n2.Modificar items\n3.Eliminar items\n4.Mostrat items\n5.Salir\n\n");
        printf("Seleccione una opcion: ");
        selector = validacion();
        system("clear");
        switch(selector){

        case 1:
            printf("Agregar items\n");
            int indiceArray = 0;
            //Validación de la cantidad de items
            printf("Ingrese la cantidad de items: ");
            cantItems = validacion();
            system("pause");
            system("clear");
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
            printf("Ingrese el codigo del item que desea modificar: ");
            scanf("%d", &codigoInt);

            for(i = 0; i < 5; i++){

                //convertir de char a int 
                if(codigoInt == ((int) arrayCodigo[i][0] - 48)){

                    ingresoDatos(nombre, cantidad, precio, codigo);
                    strcpy(arrayNombres[i], nombre);
                    strcpy(arrayCantidad[i], cantidad);
                    strcpy(arrayPrecio[i], precio);
                    strcpy(arrayCodigo[i], codigo);
                    break;
                }        
            }

            break;
        case 3:

            printf("Eliminar items\n");
            printf("Ingrese el codigo del item que desea eliminar: ");
            scanf("%d", &codigoInt);

            for(i = 0; i < 5; i++){
                
                if(codigoInt == ((int) arrayCodigo[i][0] - 48)){

                    for(size_t j = 0; j < 50; j++){

                        arrayNombres[i][j] = '\0';
                        arrayCantidad[i][j] = '\0';
                        arrayPrecio[i][j] = '\0';
                        arrayCodigo[i][0] = '\0';
                    }
                    break;
                }        
            }

            break;
        case 4:

            printf("Mostrar items\n");
            printf("+--------+------------+--------+----------+\n");
            printf("| Codigo | Producto   | Precio | Cantidad |\n");
            for(size_t i = 0; i < cantItems; i++){

                printf("+--------+------------+--------+----------+\n");
                printf("| %-6s | %-10s | %-6s | %-8s |\n", arrayCodigo[i], arrayNombres[i], arrayPrecio[i], arrayCantidad[i]);
            }
            printf("+--------+------------+--------+----------+\n");
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