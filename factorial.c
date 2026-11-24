#include <stdio.h>
int main(void){
    long long int n;

    printf("Ingrese número para sacar su factorial: ");
    scanf("%lli", &n);

    for(int i=n-1; i>1; i--){
        n = n*i;
    }
    printf("\tEl factorial es: %lli\n", n);

    return 0;
}
