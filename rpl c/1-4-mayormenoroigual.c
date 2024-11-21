#include <stdio.h>

main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    if ( num > 0 ){
    printf("Es positivo");
    }
    else if ( num < 0 ){
    printf("Es negativo");
    }
    else {
    printf("Es igual a 0");
    }
}
