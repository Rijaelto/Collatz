#include <stdio.h>
#include <stdbool.h>

bool esPar(numero)
{
	return ((numero % 2) == 0);
}

void collatz(numero)
{
	while (numero != 1)
	{
		if (esPar(numero))
		{
			printf("%i \n",numero);
			numero = numero/2;
		}
		else
		{
			printf("%i \n",numero);	
			numero = (numero*3)+1;
		}
	}
	printf("%i \n",numero);
	printf("Proceso terminado\n");
}

main(){
	int num;
	
	while (num < 1)
	{
		printf("Escribe un numero entero mayor que 0\n");
		scanf("%d",&num);
	}
	
	collatz(num);
}
