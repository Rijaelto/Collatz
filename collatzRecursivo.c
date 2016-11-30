#include <stdio.h>
#include <stdbool.h>

bool esPar(numero)
{
	return ((numero % 2) == 0);
}

void collatz(numero)
{
	printf("%i \n",numero);
	if (numero != 1)
	{
		if (esPar(numero))
			collatz(numero/2);
		else
			collatz((numero*3)+1);
	}
	else
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
