#include <iostream>
using namespace std;

int main(){
  int s, n;
  cin >> s >> n;

  for(int i = 0; i < n; i++){
    int strenth, upgrade;
    cin >> strenth >> upgrade;
    if(s < strenth){
      cout << "NO" << endl;
      return 0;
    }
    s += upgrade;
  }

  cout << "YES" << endl;
}
