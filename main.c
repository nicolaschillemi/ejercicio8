#include <stdio.h>
#include <math.h>

void main()

{
    float valor;
    float exponente;
    float resultado;


    printf("Ingrese el valor a elevar ");
    scanf("%f",&valor);

    printf("Ingresar el exponente ");
    scanf("%f",&exponente);

    resultado = pow(valor,exponente);

    printf("El resultado es %f",resultado);

}