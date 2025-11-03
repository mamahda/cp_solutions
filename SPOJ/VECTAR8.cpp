#include <cstdio>
#include <vector>
using namespace std;

const int MAXN = 1000000;
vector<bool> is_prime(MAXN + 1, true);
vector<int> count_truncatable(MAXN + 1, 0);

void sieve() {
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i * i <= MAXN; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= MAXN; j += i) {
        is_prime[j] = false;
      }
    }
  }
}

bool has_zero(int n) {
  while (n > 0) {
    if (n % 10 == 0) return true;
    n /= 10;
  }
  return false;
}

bool is_truncatable(int n) {
  if (has_zero(n)) return false;

  int temp = n;
  int divisor = 1;
  while (temp >= 10) {
    divisor *= 10;
    temp /= 10;
  }

  temp = n;
  while (divisor > 0) {
    if (!is_prime[temp]) return false;
    temp = temp % divisor;
    divisor /= 10;
  }

  return true;
}

void precompute() {
  count_truncatable[0] = 0;
  for (int i = 1; i <= MAXN; i++) {
    count_truncatable[i] = count_truncatable[i - 1];
    if (is_prime[i] && is_truncatable(i)) {
      count_truncatable[i]++;
    }
  }
}

int main() {
  sieve();
  precompute();

  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", count_truncatable[n]);
  }

  return 0;
}
