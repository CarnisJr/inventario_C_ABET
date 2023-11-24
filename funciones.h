#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

//Funcion modificar item



//Funcion validacion
int validacion(){

    char valorCentinela[1];
    int flag = 1, valorCentinelaInt;

    do{

        scanf(" %s", valorCentinela); 

        for(size_t i = 0; i < 1; i++){
            
            if(isdigit(valorCentinela[i]) != 0){

                flag = 1;
                valorCentinelaInt = (int) valorCentinela[i] - 48;
                break;
            }else
                flag = 0;

        }
            
        if(flag == 0){

            printf("ERROR, valor no valido. Intente de nuevo\n");
            system("pause");
        }

    }while(flag == 0);
    
    return valorCentinelaInt;
}

//Función ingreso de datos
void ingresoDatos(char *nombre, char *cantidad, char *precio, char *codigo){

    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombre);
    printf("Ingrese la cantidad del producto: ");
    scanf("%s", cantidad);
    printf("Ingrese el precio del producto: ");
    scanf("%s", precio);
    printf("Ingrese el codigo del producto: ");
    scanf("%s", codigo);
}

#endif