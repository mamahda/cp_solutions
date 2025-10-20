#include <cstdio>
using namespace std;

#define MAXN 500000
int sum[MAXN + 1];

int main() {
  for (int i = 1; i <= MAXN / 2; i++) {
    for (int j = i * 2; j <= MAXN; j += i) {
      sum[j] += i;
    }
  }

  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%d\n", sum[n]);
  }

  return 0;
}

