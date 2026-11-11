#include <stdio.h>
int main(void){

    float ahorroA=0;
    float cant=0;
    int mes=0;
    float ahorroMes=0;

    do{

        printf("Ingrese la cantidad de dinero a ahorrar: ");
        scanf("%f", &cant);
        ahorroA=ahorroA+cant;
        mes++;

        printf("Ahorro actual del mes %i: $%f\n", mes, ahorroA);
    }while(mes<=12);

    printf("Total ahorrado en el año: $%f\n", ahorroA);

    return 0;
}
