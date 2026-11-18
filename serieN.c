#include <stdio.h>

int main(void){
    int n, c = 0, b = 0;

    printf("Ingrese la cantidad de númemeros de la secuencia: ");
    scanf("%i", &n);

    for(int i = 2; c < n; i+=2){
        c++;
        if(b == 0){
            printf("3/%i\t+\t", i);
            b = 1;            
        }else{
            printf("3/%i\t-\t", i);
            b = 0;
        }
    }
    printf("\n");

    return 0;
}
