#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número qualquer: ");
	scanf("%d", &n);
	
	if (n<0) printf("Número menor que 0.\n");
	else if (n<10) printf("Número maior ou igual a que 0 e menor que 10.\n");
	else if (n<100) printf("Número maior ou igual a que 10 e menor que 100.\n");
	else printf("Número maior que 100.\n");
	
	return 0;
}