#include <iostream>
using namespace std;

int main(){
  int n, x = 0;
  cin >> n;
  while(n--){
   string temp;
    cin >> temp;
    if(temp == "++X" || temp == "X++") x++;
    else if(temp == "--X" || temp == "X--") x--;
  }
  cout << x << endl;
}
