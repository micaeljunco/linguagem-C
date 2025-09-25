#include <stdio.h>

int main() {
	printf("Digite quantos anos voce tem: ");
	int idade;
	scanf("%d", &idade);
	
	if(idade <= 11) printf("Você é criança.\n");
	else if (idade <= 18) printf("Você é adolescente.\n");
	else if(idade <= 24) printf("Você é jovem.\n");
	else if(idade <= 59) printf("Você é adulto.\n");
	else printf("Você é idoso.\n");
	
	return 0;
}