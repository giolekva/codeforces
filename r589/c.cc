#include <stdio.h>
#include  <vector>
#include <set>
#include <assert.h>

using  namespace std;

unsigned  long long mod = 1000000007;

typedef unsigned long long ULL;

ULL power(ULL x, ULL y) {
  ULL ret = 1;
  x = x % mod;
  while (y > 0) {
    if (y % 2 == 1) {
      ret = (ret * x) % mod;
    }
    y >>= 1;
    x = (x * x) % mod;
  }
  return ret;
}

int main() {  
  unsigned long long x, n;
  scanf("%llu %llu", &x, &n);
  vector<unsigned long long> p;
  unsigned long long k = x;
  for (unsigned long long i = 2; i * i < x; ++i) {
    if (x % i == 0) {
      p.push_back(i);
      while (k % i == 0) {
	k /= i;
      }
    }
  }
  if (k > 1) {
    p.push_back(k);
  }
  unsigned long long sol = 1;
  for (int i = 0; i < p.size(); ++i)  {
    ULL q = 1;
    while (n / q >= p[i]) {
      q *= p[i];
      unsigned long long k  = n / q;
      if (k == 0) {
	break;
      }
      if (n / q >= p[i]) {
	sol = (sol * power(q, (n / q) - (n / (p[i] * q)))) % mod;
      } else {
	sol = (sol * power(q, n / q)) % mod;	
      }
    }
  }
  printf("%llu\n", sol);
  return 0;
}
