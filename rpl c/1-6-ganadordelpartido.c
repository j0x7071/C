#include <stdio.h>

main()
{
    char e1[15];
    char e2[15];
    char ganador[15];
    int gl,gv;

    printf("Ingrese equipo local: ");
    scanf("%s",&e1);
    //fgets(e1,15,stdin);
    //fflush(stdin);
    printf("Ingrese equipo visitante: ");
    scanf("%s",&e2);
    //fgets(e2,15,stdin);u

    printf("Ingrese goles equipo local: ");
    scanf("%i",&gl);

    printf("Ingrese goles equipo visitante: ");
    scanf("%i",&gv);

    if ( gl > gv ){
        char ganador=e1;
    }
    else if ( gl < gv){
        char ganador=e2;
    } else {
        char ganador = "empate";
    }
    printf("el ganador es %s",&ganador);

}
