// Let sequence a be the number of bacteria in the jar during first experiment:
// a[0] = 1, a[1] = k + b, a[2] = a[1] * k + b, ..., a[n] = z
// In a  similar fashion let sequence b denote for bacteria growth during secong
// experiment: b[0] = t, b[1] = b[0] * k + b, ...
// If t >= z then the answer is 0, otherwise there has to exist an i for which:
// a[i] <= t && t < a[i + 1]. If so than a[i + 1] <= b[1] && b[1] < a[i + 2],
// a[i + 2] <= b[2] && b[2] < a[i + 3], ..., a[n - 1]  <= b[n - i - 1] &&
// b[n - i - 1] < a[n], a[n] <= b[n - i] && ...
// Which means that second experiment will catch up to the first one in n - i
// seconds.

#include <stdio.h>

int main() {
  int k, b, n, t;
  scanf("%d %d %d %d", &k, &b, &n, &t);
  long long z = 1;
  int i = 0;
  while (z <= t) {
    z = z * k + b;
    ++i;
  }
  --i;
  if (i > n) {
    printf("0\n");
  } else {
    printf("%d\n", n - i);
  }
  return 0;
}
