#include <stdio.h>
#include <stdbool.h>

int main() {
  int p[3];
  for (int i = 0; i < 3; ++i) {
    scanf("%d", &p[i]);
    // cin >> p[i]
  }
  int cnt = -1;
  while (true) {
    if (p[0] <= 0 && p[1] <= 0 && p[2] <= 0) {
      break;
    }
    ++cnt;
    p[cnt % 3] -= 2;
  }
  cnt += 30;
  printf("%d\n", cnt);
  // cout << cnt << endl;
  return 0;
}
