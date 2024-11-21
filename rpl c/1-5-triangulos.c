#include <stdio.h>

main()
{
    int a,b,c;
    printf("Ingrese la longitud del primer lado del triangulo: ");
    scanf("%i",&a);
    printf("\nIngrese la longitud del segundo lado del triangulo: ");
    scanf("%i",&b);
    printf("\nIngrese la longitud del tercer lado del triangulo: ");
    scanf("%i",&c);
    if (a == b && b == c){
    printf("\nEs equilatero");
    }
    else if (a!=b && b!=c && a!=c){
    printf("\nEs escaleno");
    }
    else{
    printf("\nEs isosceles");
    }
}
