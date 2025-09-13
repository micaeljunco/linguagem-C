#include <stdio.h>

int main() {
  const int array3d[2][3][2] = {
    {
        {1, 2},
        {3, 4},
        {5, 6},
    },
    {
        {7, 8},
        {9, 10},
        {11, 12}}};

  int b, i, j;

  for (b = 0; b < 2; b++) {
      printf("Bloco: %d\n", b+1);
      for (i = 0; i < 3; i++) {
          printf("\tLinha: %d\n\t\tValores: ", i +1);
          for (j = 0; j < 2; j++) {
              printf("%d ", array3d[b][i][j]);
          }
          printf("\n");
      }
      printf("\n");
  }

  return 0;
}
