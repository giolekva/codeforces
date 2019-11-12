#include <stdio.h>
#include <set>
#include <utility>
#include <vector>

using namespace std;

int main() {
  int h, w;
  scanf("%d %d", &h, &w);
  set<pair<int, int> > white;
  set<pair<int, int> > black;
  for (int i = 0; i < h; ++i) {
    int r;
    scanf("%d", &r);
    for (int j = 0; j < r; ++j) {
      auto p = make_pair(i, j);
      black.insert(p);
    }
    if (r < w) {
      auto p = make_pair(i, r);
      white.insert(p);
    }
  }
  for (int i = 0; i < w; ++i) {
    int c;
    scanf("%d", &c);
    for (int j = 0; j < c; ++j) {
      auto p = make_pair(j, i);
      black.insert(p);
    }
    if (c < h) {
      auto p = make_pair(c, i);
      white.insert(p);
    }
  }
  bool bad = false;
  for (const auto& it : black) {
    const auto& jt = white.find(make_pair(it.first, it.second));
    if (jt != white.end()) {
      bad = true;
      break;
    }
  }
  if (bad) {
    printf("0\n");
    return 0;
  }  
  int k =  h * w - black.size() - white.size();
  unsigned long long sol = 1;
  unsigned  long long mod = 1000000007;
  for (int i = 0; i < k; ++i) {
    sol = (sol * 2) % mod;
  }
  printf("%llu\n", sol);
  return 0;
}
