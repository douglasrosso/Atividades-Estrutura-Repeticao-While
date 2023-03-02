#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//3) Elabore um algoritmo que leia vários números enquanto forem positivos e imprima, ao final, quantos 
	//números foram digitados.
	float number;
	int counter;
	printf("Enquanto o algarismo for positivo o programa irá rodar, e ao final mostrará o total\n");
	printf("Informe um algarismo: ");
	scanf("%f", &number);
	while (number > 0)
	{
		counter++;
		printf("Informe um algarismo: ");
		scanf("%f", &number);
	}
	printf("Quantidade número foram digitados: %d", counter);
	
}
