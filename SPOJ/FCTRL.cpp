#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n, res = 0;
    cin >> n;
    for(int i = 5; i < 1000000000; i *= 5){
      res += n / i;
    }

    cout << res << endl;
  }
}
