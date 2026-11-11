#include <stdio.h>
int main(void){
    int n, c1 =0, c2 = 0, c3 = 0, a;

    printf("Ingrese la cantidad de números a evaluar: ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++){
        printf("Ingrese número a evaluar: ");
        scanf("%i", &a);

        if(a > 0)
            c1++;
        else{
            if(a < 0)
                c2++;
            else
                c3++;
        }
    }

    printf("La cantidad de números mayores a 0 son: %i\nLa cantidad de números menores a 0 son: %i\nLa cantidad de números igual a 0 son: %i\n", c1, c2, c3);

    return 0;
}
