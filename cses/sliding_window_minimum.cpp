#include <stdio.h>
#include <deque>
using namespace std;

#define ll long long
ll n, k, x, a, b, c, i, idx, xorans, temp;
deque<pair<ll, ll>> dq, ans;

int main(){
  scanf("%lld %lld %lld %lld %lld %lld", &n, &k, &x, &a, &b, &c); 

  idx = 0;

  for (ll i = 0; i < n; i++) {
    if (i > 0) temp = (a * temp + b) % c;
    else temp = x;

    while (!dq.empty() && dq.back().first >= temp)
      dq.pop_back();

    dq.push_back({temp, i});

    while (dq.front().second <= i - k)
      dq.pop_front();

    if (i >= k - 1){
      printf("%lld ", dq.front().first);
      xorans ^= dq.front().first; 
    }
  }

  printf("\n%lld\n", xorans);

  return 0;
}
