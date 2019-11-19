#include <stdio.h>
#include <stdbool.h>

int a[1000][1000];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int p = 0; p < m; p++) {
    int x, y;
    scanf("%d %d", &x, &y);
    x--;
    y--;
    a[x][y] = 1;
    for (int i = x - 2; i <= x; ++i) {
      for (int j = y - 2; j <= y; ++j) {
	if (i >= 0 && i < n &&
	    j >= 0 && j < n &&
	    i + 2 >= 0 && i + 2 < n &&
	    j + 2 >= 0 && j + 2 < n ) {
	  bool has_white = false;
	  for (int k = 0; k < 3; ++k) {
	    for (int l = 0; l < 3; ++l) {
	      if (a[i + k][j + l] == 0) {
		has_white = true;
	      }
	    }
	  }
	  if (has_white == false) {
	    printf("%d\n", p + 1);
	    return 0;
	  }
	}
      }
    }
  }
  printf("-1\n");
  return 0;
}
