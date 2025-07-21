#include <iostream>
using namespace std;

int main(){
  int a[] = {100,20,10,5,1};
  int n,ans=0;
  cin>>n;
  while(n>0){
    for (int i=0;i<5;i++){
      if(n>=a[i]){
        n-=a[i];
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
}
