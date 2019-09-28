// If at least one of the dimensions is even then the whole board can be covered
// with dominoes. Otherwise all board except one cell.

// Again we include stdio library so we can read from standard input and write
// to standard output.
#include <stdio.h>

int main() {
  // We need to read dimensions of a board, so we declare two variables for it.
  int m, n;
  // Read the dimensions.
  scanf("%d %d", &m, &n);
  // Calculate and print the solution in standard output.
  printf("%d\n", m * n / 2);
  // And return zero upon success.
  return 0;
}
