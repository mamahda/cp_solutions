#include <iostream>
#define ll long long
using namespace std;

bool binser(ll a[], ll x, ll l, ll r){
  while(l <= r){
    ll mid = l + (r - l) / 2;
    if(a[mid] == x){
      return true;
    }
    if(a[mid] < x){
      l = mid + 1;
    }else{
      r = mid - 1;
    }
  }
  return false;

}

int main(){
  ll n, d, count = 0;
  cin >> n >> d;
  ll a[n];
  ll temp = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    if(binser(a, a[i] + d, i, n - 1)){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
