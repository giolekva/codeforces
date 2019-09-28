// Dragon will be punched in the face iff it is divisible by either k, l, m or
// n. So to calculate total number of dragons which will be punched we iterate
// over all of their indices from 1 to d and check if they are divisible on k, l
// m or n.

#include <stdio.h>

int main() {
  int k, l, m, n, d;
  scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
  // Stores total number of dragons punched.
  int sol = 0;
  // Iterate over all dragons.
  for (int i = 1; i <= d; ++i) {
    // Check if |i| is divisible by either |k|, |l|, |m| or |n|.
    // % represents modulo operator. i % k returns remainder when dividing
    // |i| on |k|. For example 10 % 4 == 2.
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)  {
      ++sol;
    }
  }
  printf("%d\n", sol);
  return 0;
}
