#include <stdio.h>

int main() {
	printf("Digite uma letra entre A e Z:");
	
	char ch = getchar();
	
	if (ch >= 'A') if (ch <= 'Z') printf("\nVoce acertou\n");
	
	return 0;
}