#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//5) Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos 
	//números. Considere que o número zero (0) finaliza a entrada de dados e não faz parte da 
	//seqüência. 
	int num, maior=-99999, menor=99999;
	float soma=0, cont=0;
	printf("Informe um número: ");
	scanf("%d", &num);
	while (num != 0)
	{
		soma+=num;
		cont++;
		if (num < menor)
		{
			menor=num;
		}
		if (num > maior)
		{
			maior=num;
		}
		
		printf("Informe um número: ");
		scanf("%d", &num);
	}
	printf("Maior número: %d\n", maior);
	printf("Menor número: %d\n", menor);
	printf("Média aritmética: %.2f\n", soma/cont);

}
	
