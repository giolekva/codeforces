// Let's consider the case when given Theatre Square is one dimensional: 1xm
// In such scenario if m is divisiable a then total number of squares needed
// to cover full Theatre Square is m / a otherwise we will need one extra
// piece so answer will come out as m / a + 1. Both of these cases can be
// coded as (m + a - 1) / a.
// In similar fashion in case of two dimensional Theatre Square, number of
// smaller squares to cover second dimension is (n + a - 1) / a.
// So total number of squares comes out as ((n + a - 1) / a) * ((m + a - 1) / a)

#include <stdio.h>

int main() {
  int n, m, a;
  scanf("%d %d %d", &n, &m, &a);
  printf("%d\n", ((n + a - 1) / a) * ((m + a -  1) / a));
  return 0;
}
