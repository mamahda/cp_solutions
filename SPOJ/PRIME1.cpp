#include <iostream>
#include <vector>
using namespace std;

vector<int> simpleSieve(int limit) {
  vector<bool> mark(limit + 1, true);
  mark[0] = mark[1] = false;
  for (int i = 2; i * i <= limit; i++) {
    if (mark[i]) {
      for (int j = i * i; j <= limit; j += i)
        mark[j] = false;
    }
  }
  vector<int> primes;
  for (int i = 2; i <= limit; i++)
    if (mark[i]) primes.push_back(i);
  return primes;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  const int LIMIT = 31623; 
  vector<int> primes = simpleSieve(LIMIT);

  while (t--) {
    long long m, n;
    cin >> m >> n;

    if (m < 2) m = 2;
    int size = n - m + 1;
    vector<bool> isPrime(size, true);

    for (int p : primes) {
      if (1LL * p * p > n) break;

      long long start = max(1LL * p * p, ((m + p - 1) / p) * 1LL * p);
      for (long long j = start; j <= n; j += p)
        isPrime[j - m] = false;
    }

    for (int i = 0; i < size; i++)
      if (isPrime[i]) cout << m + i << "\n";

    cout << "\n"; 
  }
  return 0;
}

