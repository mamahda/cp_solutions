#include <cstdio>

using namespace std;
typedef long long ll;
ll GCD[1000005];

ll gcd(ll a, ll b) {
    while (b) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void sieve(ll N){
  ll G = 0;
  for(int i = 1; i < N; i++){
    for(int j = i+1; j < N; j++){
      G += gcd(i, j);
      printf("%lld\n", G);
    }
    GCD[i] = G;
  }
}

int main(){
  sieve(1000001);
  printf("sieve successfull\n");
  ll input = -1;
  while(input != 0){
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", GCD[n]);
  }
}
