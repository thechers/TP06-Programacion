#include <stdio.h>
#define TAMA 100
void mezclarCadenas(char *cad1, char *cad2, int num);


int main()
{
	char cadena1[TAMA],cadena2[TAMA],*cad1,*cad2;
	int num;

	printf("Ingrese la primera frase: \n");
	fflush(stdin);
	gets(cadena1);
	printf("Ingrese la segunda frase: \n");
	fflush(stdin);
	gets(cadena2);
	printf("Ingrese un numero: \n");
	scanf("%d", &num);

	cad1 = cadena1;
	cad2 = cadena2;

	mezclarCadenas(cad1,cad2,num);

	return 0;
}


void mezclarCadenas(char *cad1, char *cad2, int num)
{
	char cadAux[TAMA];
	int i,cont = 0,cont2=0;

	for (int i = 0; i <= num; i++)
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

	cadAux[cont2+1] = '\0';

	printf("La frase modificada es: \n");

	for (int i = 0; i <= cont2; i++)
	{
		printf("%c", cadAux[i]);
	}

}