intercambia (int *x, int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}



main(void){
    int a=7, b=8;
    int *puntero;
    char cadena[12];
    char mono[13];
    scanf("%s",&cadena);
    printf("%i\n",a);
    printf("%i\n",b);
    mono = cadena;
    int z;
    z = a;
    a = b;
    b = z;
    printf("%s",cadena);
    printf("%s",mono);
    puntero = &a;
    printf("a=%d b=%d\n", a,b);
    printf("%i\n",&a);
    printf("%i\n",&b);
    printf("%i\n",puntero);
    intercambia(&a,&b);
    printf("a=%d b=%d\n", a,b);
    printf("%i\n",&a);
    printf("%i\n",&b);

    printf("%i\n",puntero);
}

