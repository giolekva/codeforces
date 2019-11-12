#include <stdio.h>

int main() {
  int n;
  int a[100001];
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    int k;
    scanf("%d", &k);
    a[k] = i;
  }
  int m;
  scanf("%d", &m);
  long long x = 0, y = 0;
  while (m--) {
    int k;
    scanf("%d", &k);
    x += a[k];
    y += n - a[k] + 1;
  }
  printf("%I64d %I64d\n", x, y);
  return 0;
}
