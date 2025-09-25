#include <stdio.h>

int main() {
	printf("Digite uma letra entre A e Z:");
	
	char ch = getchar();
	
	if (ch >= 'A' && ch <= 'Z') printf("\nVocê acertou\n");
	
	return 0;
}