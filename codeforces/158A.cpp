#include <iostream>
using namespace std;
// test
int main(){
  int n,k,ans=0;
  cin>>n>>k;
  int a[n];
  for(int i=0; i<n; i++) {
    cin >> a[i];
  } 
  for(int i=0; i<n; i++) {
    if(a[i]>0 && a[i]>=a[k-1]) ans++; 
  }
  cout << ans << endl;
}
