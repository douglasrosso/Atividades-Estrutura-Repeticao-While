#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	//6) Elabore um algoritmo que leia a idade e sexo (M– masculino, F – feminino) de várias pessoas. 
	//Calcule e imprima a idade média, total de pessoas do sexo feminino, e o total de pessoas do sexo 
	//masculino. O algoritmo termina quando se digita 0 para a idade. 	
	char gender;
	int age, masc=0, fem=0;
	float counter=0, total=0;
	printf("Enquanto a idade não for 0 o programa irá rodar\n");
	printf("\nInforme a idade: ");
	scanf("%d", &age);
	
	while (age != 0)
	{
		printf("Informe o gênero: ");
		fflush(stdin);
		scanf("%c", &gender);
		
		if (gender == 'm' or gender == 'M')
		{
			masc++;
		} else if (gender == 'f' or gender == 'F')
		{
			fem++;
		} else
		{
			printf("Gênero inválido, tente novamente.");
		}
		
		counter++;
		total+=age;
		
		printf("Informe a idade: ");
		scanf("%d", &age);
		
	}
	printf("\nMédia das idades digitadas é: %.2f\n", total/counter);
	printf("Total de pessoas do sexo feminino é: %d\n", fem);
	printf("Total de pessoas do sexo masculino é: %d\n", masc);
	
}
