#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//4) Elabore um algoritmo que leia vários números positivos e imprima, ao final, a média dos números 
	//digitados. 
	float number, sum;
	int counter;
	printf("Enquanto o algarismo for positivo o programa irá rodar, e ao final mostrará a média\n");
	printf("Informe um algarismo: ");
	scanf("%f", &number);
	while (number > 0)
	{
		counter++;
		sum+=number;
		printf("Informe um algarismo: ");
		scanf("%f", &number);
	}
	printf("Média dos números digitados é: %f", sum/(counter-1));
	
}
