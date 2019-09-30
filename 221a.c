#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", n);
  int i = 1;
  // Here we use the while loop instead of for loop. While loop takes only one
  // condition expression and executes body until condition evaluates to true.
  while (i < n) {
    printf(" %d", i);
    ++i;
  }
  printf("\n");
  return 0;
}
