#include <iostream>
using namespace std;

int main(){
  int anton = 0, danik = 0, n;
  cin >> n;
  while(n--){
    char c;
    cin >> c;
    if(c == 'A') anton++;
    else danik++;
  }
  if(anton > danik) cout << "Anton" << endl;
  else if(anton < danik) cout << "Danik" << endl;
  else cout << "Friendship" << endl;
}
