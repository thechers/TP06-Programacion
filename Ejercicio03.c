#include <stdio.h>
#include <stdlib.h>
void mezclarCadenas(char *cad1, char *cad2, int num);


int main()
{
	char *cad1,*cad2;
	int num,contador=0,contador2=0,tama=20;
	
	cad1 = (char *)malloc(tama * sizeof(char));
	cad2 = (char *)malloc(tama * sizeof(char));
	
	printf("Ingrese la primera frase: \n");
	fflush(stdin);
	gets(cad1);
	printf("Ingrese la segunda frase: \n");
	fflush(stdin);
	gets(cad2);
	printf("Ingrese un numero: \n");
	scanf("%d", &num);

	while(*cad1 != '\0'){
		contador++;
		cad1++;
	}	
		cad1 -= contador;
		char *cadena1 = (char *)realloc(cad1,contador * sizeof(char));
		cad1 = cadena1;
		

	while(*cad2 != '\0'){
		contador2++;
		cad2++;
	}
		cad2 -= contador2;
		char *cadena2 = (char *)realloc(cad2,contador * sizeof(char));
		cad2 = cadena2;

		mezclarCadenas(cad1,cad2,num);
	return 0;
}

void mezclarCadenas(char *cad1, char *cad2, int num)
{
	char *cadAux;
	int tama=30,i,cont = 0,cont2=0;
	
	cadAux = (char *)malloc(tama * sizeof(char));

	for (int i = 0; i < num; i++)
	{
		cadAux[i] = *cad1;
		cad1++;
		cont2++;
	}
	
	while(*cad2 != '\0')
	{
		cadAux[num+1] = *cad2;
		cad2++;
		cont2++;
		num++;
	}
	

	while (*cad1 != '\0')
	{
		cadAux[cont2+1] = *cad1;
		cad1++;
		cont2++;
	}
	
    char *aux = (char *)realloc(cadAux,(cont2+1)*sizeof(char));

    cadAux = aux;

	cadAux[cont2+1] = '\0';

	printf("La frase modificada es: \n");

	for (int i = 0; i <= cont2; i++)
	{
		printf("%c", cadAux[i]);
	}

	free(cad1);
	free(cad2);
	free(cadAux);
}
