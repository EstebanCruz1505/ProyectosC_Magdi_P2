#include <stdio.h>
int main(void){
    int a, sum, i = 0;

    printf("Ingrese un número: ");
    scanf("%i", &a);
    
    while(i <= a){
        printf("%i\n", i);
        sum = sum+i;
        i++;
    }
    printf("La suma de todos los números es: %i \n", sum);

    return 0;
}
