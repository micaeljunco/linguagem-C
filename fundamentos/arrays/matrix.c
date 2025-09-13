#include <stdio.h>

int main() {
  // Declarando uma matriz
  int matriz[2][3] = {
      {1, 2, 3}, // Primeira linha
      {4, 5, 6}  // Segunda linha
  };

  int i, j;
  for (i = 0; i < 2; i++) {
      printf("Linha %d\n Valores: ", i+1);
      for (j = 0; j < 3; j++) {
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }

  return 0;
}
