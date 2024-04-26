#include<stdio.h>

int main(void)
{
    int num1, num2, suma, resta, multiplicacion, division;

    printf("ingrese un valor: ");
    scanf("%d", &num1);
    printf("ingrese otro valor: ");
    scanf("%d", &num2);

    suma = num1 + num2;


    printf("\n%d + %d = %d", num1, num2, suma);

    
    resta = num1 - num2;


    printf("\n%d - %d = %d", num1, num2, resta);


    multiplicacion = num1 * num2;


    printf("\n%d * %d = %d", num1, num2, multiplicacion);


    division = num1 / num2;


    printf("\n%d / %d = %d", num1, num2, division);


    return 0;
}