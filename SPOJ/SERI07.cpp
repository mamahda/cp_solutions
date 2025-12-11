#include <iostream>
#include <vector>
using namespace std;

#define ll long long

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

int main(){
  sieve(351587);
  ll t, n;
  cin >> t;
  while(t--){
    cin >> n;
    for (ll i = 1; i <= n; i++){
      ll index = i * 3 - 3;
      cout << (primes[index]*primes[index+1])+primes[index+2] << " ";
    }
    cout << endl;
  }
}
