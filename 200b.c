// Answer to the given problem is avarage of given percentages.
// We calcualte that by first summing up all percentages and then diving it on
// total number of drinks.

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  // Stores sum of percentages.
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    int p;
    scanf("%d", &p);
    sum += p;
  }
  // We multiple |sum| on 1.0 to convert it to floating point (fractional)
  // number and then divide it on |n|. Division operator / when applied to
  // integers returns an integer, for example 5 / 2 == 2 but 5.0 / 2 == 2.5
  printf("%f\n", (1.0 * sum) / n);
  return 0;
}
