#include <stdio.h>

// Representa um grupo de constantes
enum Level {
  LOW,
  MEDIUM,
  HIGH,
};

enum cargaBateria { BAIXA = 15, MEDIA = 30, ALTA = 70, CHEIA = 100 };

int main() {
  enum Level var = LOW;
  enum Level var1 = MEDIUM;
  enum Level var2 = HIGH;

  printf("%d\n", var);  // 0
  printf("%d\n", var1); // 1
  printf("%d\n", var2); // 2

  enum cargaBateria cargaAlta = ALTA;

  switch (cargaAlta) {
  case 15:
    printf("Carga baixa\n");
    break;
  case 30:
    printf("Carga média\n");
    break;
  case 70:
    printf("Carga alta\n");
    break;
  case 100:
    printf("Carga cheia\n");
    break;
  }

  return 0;
}
