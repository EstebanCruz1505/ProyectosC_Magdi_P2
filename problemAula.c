#include <stdio.h>
int main(void){
    int n;
    printf("Ingresa un número: ");
    scanf("%i", &n);

    while(n >= 0){
        printf("%i\n", n);
        n--;
    }

    return 0;
}
