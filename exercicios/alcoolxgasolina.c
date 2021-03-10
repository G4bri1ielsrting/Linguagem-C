#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exerc�cio - �lcool ou Gasolina?
	@author Professor Jos� de Assis
	https://www.youtube.com/user/ProfessorJosedeAssis
	Para carros flex � preciso ter cautela ao escolher o combust�vel
	na hora de abastecer. A principal diferen�a de pre�os e vantagens
	entre os dois combust�veis est� na propor��o pre�o X desempenho.
	Para o �lcool ser mais vantajoso do que a gasolina, o pre�o do litro
	tem que custar at� 70% do litro da gasolina.
	Baseado nestas informa��es desenvolva um aplicativo para determinar
	qual � o combust�vel mais vantajoso para abastecer.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float alcool,gasolina;
	printf("�lcool x Gasolina\n");
	printf("Digite o valor do litro do �lcool: ");
	scanf("%f",&alcool);
	printf("Digite o valor do litro da gasolina: ");
	scanf("%f",&gasolina);
	if (alcool < (0.7 * gasolina)) {
		printf("Abaste�a com �LCOOL\n");
	} else {
		printf("Abaste�a com GASOLINA\n");
	}
	system("PAUSE");
	return 0;
}
