#include <stdio.h>

main()
{
    int edad;
    printf("Ingrese edad: ");
    scanf("%i",&edad);
    if (edad>17) {
        printf("Es mayor de edad");
    } else {
        printf("Es menor de edad");
    }
    return 0;
}
