#include <stdio.h>

main (){
    char car = 'a';
    int num = 3;
    char copia = num;
    int *icar = car;
    int *inum = num;
    int dircar = &car;
    int dirnum = &num;
    printf("caracter: %c\n",car);
    printf("numero: %i\n\n",num);
    printf("indicador de caracter: %c\n",icar);
    printf("indicador de numero: %i\n\n",inum);
    printf("direccion de caracter: %c\n",dircar);
    printf("direccion de numero: %i\n\n",dirnum);



    printf("copia copiadora: %i\n",copia);
}

