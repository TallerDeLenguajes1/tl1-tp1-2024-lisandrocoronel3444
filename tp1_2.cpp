#include <stdio.h>

float devolverCuadrado(float num);
void devolverCuadradoV2(float num);
void mostrarDireccion(float num);
void invertirValores(float valor1, float valor2);
void ordenar(float num1, float num2);
void mostrarPar(float num1, float num2);
int main(){
    float numero = 2;
    printf("El cuadrado de %0.f es: %0.f\n", numero, devolverCuadrado(numero));
    devolverCuadradoV2(numero);
    float direccion;
    printf("Ingrese un numero\n");
    scanf("%f", &direccion);
    mostrarDireccion(direccion);

    float valor1,valor2;
    printf("Ingrese el primer valor\n");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor\n");
    scanf("%f", &valor2);
    invertirValores(valor1,valor2);

    ordenar(valor1,valor2);
    mostrarPar(valor1,valor2);



  return 0;
}

float devolverCuadrado(float num){
    return num*num;
}
void devolverCuadradoV2(float num){

    printf("El cuadrado de %0.f es: %0.f\n", num, num*num);
    
}
void mostrarDireccion(float num){
    printf("La direccion del numero es %d\n", &num);
    printf("El contenido es: %0.f\n", num);
}
void invertirValores(float valor1, float valor2){
    float guardaValor = valor1;
    valor1 = valor2;
    valor2 = guardaValor;
    printf("El primer valor es %0.f\n", valor1);
    printf("El segundo valor es %0.f\n", valor2);
    



}
void ordenar(float num1, float num2){
    float primero;
    primero = num1;
    if(num1 > num2){
        num1 = num2;
        num2 = num1;
    }
    printf("El primer numero es: %0.f\n", num1);
    printf("El segundo numero es: %0.f\n", num2);



}
void mostrarPar(float num1, float num2){
    printf("El par es: %.0f, %.0f\n", num1,num2);
}
