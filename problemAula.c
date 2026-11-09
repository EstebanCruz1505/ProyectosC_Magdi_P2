#include <stdio.h>
int main(void){
    int n;
    printf("Ingresa un número: ");
    scanf("%i", &n);

    int i=n;

    while(i >= 0){
        printf("%i", n);
        n--;
        i=i-1;
    }

    return 0;
}
