#include <stdio.h>

int main() {
	int n1, n2;
	
	printf("Digite dois números inteiros quaisquer: ");
	scanf("%d %d", &n1, &n2);
	
	printf("A ordem crescente dos números é: ");
	if(n1 < n2) printf("%d, %d\n", n1, n2);
	else printf("%d, %d\n", n2, n1);
	
	return 0;
}
