#include <stdio.h>

int main(void) {
    int a, b, contador = 0;

    printf("Ingresa un número: ");
    scanf("%i", &a);
    printf("Ingresa un número mayor al anterior: ");
    scanf("%i", &b);

    for(int i = a; i <= b; i++){
        if(i % 2 != 0){
            contador++;
        }
    }

    printf("\tLa cantidad de números impares en el rango de %i a %i es: %d.\n", a, b, contador);

    return 0;
}
