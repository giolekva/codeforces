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
  // We use unsignd long long type so that we can store maximum possible
  // solution ever possible on this problem, which is in the case of when
  // |n| == |m| == 1 000 000 000  and |a| == 1.
  unsigned long long x = (n + a - 1) / a;
  unsigned long long y = (m + a - 1) / a;
  // Here we use %llu modifier to print unsigned long long.
  printf("%llu\n", x * y);
  return 0;
}
