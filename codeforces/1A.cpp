#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
  ll n,m,a,ans;
  cin>>n>>m>>a;
  ans = ((n+a-1)/a) * ((m+a-1)/a);
  cout << ans << endl;
}
