
/******************************************************************************

1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva
el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

*******************************************************************************/
/*
#include <stdio.h>

float aplicarDescuento(int precio);
int main()
{
    int valor = 792;
    float desc;
    desc = aplicarDescuento(valor);
    printf("%.2f\n", desc);

    return 0;
}

float aplicarDescuento(int precio){
    float ret;

    ret = precio*0.95;

    return ret;
}
*/



/******************************************************************************

2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro
y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena

*******************************************************************************/

/*
#include <stdio.h>

int contarCaracteres(char array[], int tam, char caracter);
int main()
{
    char nombre[10]={"perro"};
    int cant;

    cant= contarCaracteres(nombre, 10, 'x');
    printf("%d", cant);


    return 0;
}

int contarCaracteres(char array[], int tam, char caracter){
    int cont=0;

    for(int i=0;i<tam;i++){
        if(array[i] == caracter){
            cont++;
        }
    }

    return cont;

}
*/


/*
/******************************************************************************

3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar
un array de dicha estructura por marca. Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

*******************************************************************************/
/*
#include <stdio.h>

typedef struct{
    int id;
    char procesador[20];
    char marca[20];
    int precio;
}eNotebook;


void ordenarPorMarca(eNotebook vec[], int tam);

int main()
{
    eNotebook test[3]={{ 1, "julia", "julia", 200},
                        { 2, "susana", "susana", 444},
                        { 3, "carla", "carla", 111}

};

    for(int i=0; i<3; i++){
        printf("%s      %d\n", test[i].marca, test[i].precio);
    }


    ordenarPorMarca(test, 3);

    for(int i=0; i<3; i++){
        printf("%s      %d\n", test[i].marca, test[i].precio);
    }

    return 0;
}

void ordenarPorMarca(eNotebook vec[], int tam)
{

    eNotebook aux;


        for(int i=0; i < tam - 1; i++){
            for(int j=0; i<tam; j++ ){
                if((vec[i].marca > vec[j].marca)|| (vec[i].marca == vec[j].marca && vec[i].precio == vec[j].precio)){
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }

        }

}
*/
