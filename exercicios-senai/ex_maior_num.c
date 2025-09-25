#include <stdio.h>

int main() {
	int n1, n2, n3;
	printf("Digite tres numeros quaisquer: ");
	scanf("%d %d %d%*c", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3) printf("Maior numero: %d", n1);
	else if (n2 > n1 && n2 > n3) printf("Maior numero: %d", n2);
	else printf("Maior numero: %d", n3);
	
	return 0;
}