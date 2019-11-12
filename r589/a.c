#include <stdio.h>
#include <set>

int  main() {
  int l, r;
  scanf("%d %d", &l, &r);
  for (int i = l; i <= r; ++i) {
    std::set<int> s;
    int k = i;
    bool found = true;
    while (k > 0) {
      if (!s.insert(k % 10).second) {
	found = false;
	break;
      }
      k /= 10;
    }
    if (found) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
}
