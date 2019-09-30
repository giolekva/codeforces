#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  // Stores index of the current walrus.
  int i = 1;
  // Again we use while loop instead of for loop.
  // In the condition we run logic of handing out chips until amount of chips we
  // have is greater or equal to the index of current walrus.
  while (m >= i) {
    m -= i;
    // If we are at the last walrus move to the first one.
    if (i == n) {
      i = 1;
    } else { // Otherwise move to the walrus with one higher index.
      ++i;
    }
  }
  printf("%d\n", m);
  return 0;
}
