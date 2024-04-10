#include <stdio.h>

main(){
    printf("Hola mundo\n");
    int num = 5;
    int * pPunt = &num;
    printf("El contenido del puntero es %d\n", *(pPunt));
    printf("Direccion almacenada %d\n", pPunt);
    printf("Direccion de memoria de la variable: %d\n", &num);
    printf("Direccion de memoria de puntero: %d\n", &pPunt);
    printf("Tamanio de la variable: %d\n", sizeof(num));
    








}