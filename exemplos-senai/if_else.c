#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	if (getchar() == 'p') printf("Você digitou p.\n");
	else printf("Você não digitou p.\n");
	
	return 0;
}