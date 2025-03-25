#include <stdio.h>

int main() {
	int num1,contador,i ;
	printf("Ingrese un numero para saber si es primo \n");
	scanf("%d",&num1);
	contador = 0;
	for(i=2;i < num1; i++)
	{
		if (num1 %i == 0)
		{
		contador++;	
		}
	}
	if (contador == 0)
	{
		printf("El numero %d",num1);
		printf(" es primo");
	}
	else
	{
		printf("El numero no es primo");
	}
	
	return 0;
}
