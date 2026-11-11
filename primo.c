#include <stdio.h>
int main(void){
    //Leer un número del teclado y evaluar si es primo o no.
    
    int n;
    float c = 0;

    printf("Ingresa un número: ");
    scanf("%i", &n);

    for(int a == 1; a <= n; a++){
        if(n%a != 0){
            c++;
        }
    }

    if(c == 2)
        printf("Es primo.");
    else
        printf("No es primo");

    return 0;
}
