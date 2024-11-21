#include <stdio.h>
#include <windows.h>
main ()
{
    system("cls");
    float base, altura, perimetro;
    printf("Ingrese la base del rectangulo: ");
    scanf("%f",&base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%f",&altura);

    perimetro = base*2 + altura*2 ;
    printf("\nEl perimetro del rectangulo es: %f",perimetro);
    return 0;
}
