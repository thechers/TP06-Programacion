#include <stdio.h>
#include <ctype.h>
#define TAMA 100

int main (){

    char frase[TAMA], *p_frase,*punt;
    int cons=0,*p_cons;

    printf("Ingrese una frase: \n");
    gets(frase);
//*** */
    punt = frase;
    punt = &frase[0];
//*** */
    p_frase = frase;
    p_cons = &cons;
    while (*p_frase != '\0')
    {
        if (*p_frase == 'a' || *p_frase == 'e' || *p_frase == 'i' || *p_frase == 'o' || *p_frase == 'u' || *p_frase == ' ')
        {
            printf("%c", *p_frase);
            p_frase++;
        }
        else 
        {
            printf("%c", toupper(*p_frase));
            p_frase++;
            *p_cons += 1;
        }
    }
    
    printf("\nCantidad de consonantes: %d\nLa direccion de la variable punt es: %p\nLa direccion de la primera componente del arreglo (frase) es: %p\nEl contenido de la primera componente del arreglo es: %c\nEl contenido de la cuarta celda del arreglo en notacion Subindice es: %c\nEl contenido de la cuarta celda del arreglo en notacion de punt con despl es: %c\n", *p_cons, &punt, punt,*punt,frase[3],*(punt+3));
    printf("La direccion referenciada por punt + 5 es: %p\nEl valor almacenado en esa direccion es: %c\n", punt+5,*(punt+5));
        

    return 0;
}