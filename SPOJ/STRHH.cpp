#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string str;
    cin >> str;
    int len = str.size();

    for (int i = 0; i < ceil(len/2); i += 2) {
      cout << str[i];
    }
    cout << endl;
  }
}
