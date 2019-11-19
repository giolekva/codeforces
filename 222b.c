#include <stdio.h>

int table[1001][1001];
int row[1001];
int col[1001];

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      scanf("%d", &table[i][j]);
    }
  }
  for (int i = 1; i <= n; ++i) {
    row[i] = i;
  }
  for (int j = 1; j <= m; ++j) {
    col[j] = j;
  }
  for (int i = 0; i < k; ++i) {
    char op;
    int x, y;
    scanf("\n%c %d %d", &op, &x, &y);
    if (op == 'g') {
      printf("%d\n", table[row[x]][col[y]]);
    } else if (op == 'r') {
      int tmp = row[x];
      row[x] = row[y];
      row[y] = tmp;
    } else if (op == 'c') {
      int tmp = col[x];
      col[x] = col[y];
      col[y] = tmp;      
    }
  }
  return 0;
}
