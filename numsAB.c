#include <stdio.h>

int main(void){
    //Cuántos números de la serie hay de A a B.
    int a, b, ns, cont = 0;

    printf("Ingrese el rango de inicio: ");
    scanf("%i", &a);
    printf("Ingrese el rango final: ");
    scanf("%i", &b);

    for(ns = a; ns <=b;){
        printf("%i\t", ns);
        ns+=2;
        cont++;
    }
    printf("\nEn total hay %i números en la serie de %i a %i\n", cont, a, b);

    return 0;
}
