#include <iostream>
using namespace std;

#define ll long long

ll factorial(ll n){
  if(n == 0) return 1;
  return n * factorial(n - 1);
}

int main(){
  ll n, ans;
  cin >> n;

  ans = factorial(2*n) / factorial(n + 1);
  cout << ans << endl;
}
