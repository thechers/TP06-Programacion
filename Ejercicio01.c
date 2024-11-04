#include <stdio.h>

int main(){

    int a,b,c;
    int *p,*q,*r;

    printf("Ingrese tres numeros: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("El primer numero es: %d \nEl segundo numero es: %d\n",a,b);

    p = &a;
    q = &b;
    r = &c;
    printf("El tercer numero es: %d\n", *r);
    printf("La direccion de memoria de c es: %p\n",r);
    //A partir de aqui modifico la variable c (punto g)
    
    *r = *p;

    printf("El puntero p contiene: %d\nEl puntero q contiene: %d\n", p,q);
    printf("El contenido del puntero p es: %d\nEl contenido del puntero q es: %d\nLa direccion de memoria de p es: %p\nLa direccion de memoria de q es: %p\n",*p,*q,p,q);
    printf("El valor nuevo de c es: %d\n",*r);

    *r = *p + *q;

    printf("El valor de c es la suma de a + b: %d\n",*r);

    *p += 1;
    printf("Ejecuto *p=*p+1 : %d\n", *p);

    p += 1;
    printf("Ejecuto p=p+1 : %d\n", p);


    return 0;
}
