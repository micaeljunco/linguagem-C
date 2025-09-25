#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char op;
    float num1, num2;

    printf("Digite um número, operador e mais um número: ");
    scanf("%f %c %f", &num1, &op, &num2);
    
    switch (op)
    {
    case '+':
        printf(" = %.2f\n", num1+num2);
        break;
    
    case '-':
        printf(" = %.2f\n", num1-num2);
        break;

    case '*':
        printf(" = %.2f\n", num1*num2);
        break;
    
    case '/':
        printf(" = %.2f\n", num1/num2);
        break;
        
    default:
        printf("Operador inválido!\n");
        break;
    }
    return 0;
}