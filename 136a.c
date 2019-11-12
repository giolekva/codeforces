#include <stdio.h>

int main() {
  int n;
  int p[101];
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    int k;
    scanf("%d", &k);
    p[k] = i;
  }
  for (int i = 1; i <= n; ++i) {
    printf("%d ", p[i]);
  }
  return 0;
}
