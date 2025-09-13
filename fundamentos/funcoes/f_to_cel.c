#include <stdio.h>

float paraCelcius(float fahrenheit);

int main() {
  float fa_val = 98.8;

  float res = paraCelcius(fa_val);

  printf("Fahrenheit: %.2f\n", fa_val);

  printf("Converte Fahrenheit para Celsius: %.2f\n", res);

  return 0;
}

float paraCelcius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}
