#include<stdio.h>

int main(void)
{
    int num1, num2, suma;

    printf("ingrese un valor: ");
    scanf("%d", &num1);
    printf("ingrese otro valor: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("%d + %d = %d", num1, num2, suma);

    return 0;
}