#include <stdio.h>

int soma(int k);

int main() {
  int res = soma(10);
  printf("%d\n", res);
  return 0;
}

int soma(int k) {
  if (k > 0) {
    return k + soma(k - 1);
  } else {
    return 0;
  }
}
