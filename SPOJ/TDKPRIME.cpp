#include <cstdio>
#include <vector>
typedef long long ll;
using namespace std;

vector<ll> primes;

void sieve(ll limit) {
  vector<bool> isPrime(limit + 1, true);
  isPrime[0] = isPrime[1] = false;

  for (ll i = 2; i * i <= limit; i++) {
    if (isPrime[i]) {
      for (ll j = i * i; j <= limit; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (ll i = 2; i <= limit; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
      if (primes.size() >= 5000000) break;
    }
  }
}

int main() {
  sieve(87000000);  

  ll t;
  scanf("%lld", &t);
  while (t--) {
    ll k;
    scanf("%lld", &k);
    printf("%lld\n", primes[k - 1]);
  }
  return 0;
}
