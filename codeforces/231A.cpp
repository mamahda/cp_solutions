#include <iostream>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++){
    int temp = 0;
    for(int j = 0; j < 3; j++) {
      int temp2 = 0;
      cin >> temp2;
      if(temp2 == 1) temp++;
      //cout << ans<< " "<< temp << endl;
    }
    if(temp >= 2) ans++;
  }
  cout << ans << endl;
}
