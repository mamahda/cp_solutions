#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int temp;
    cin >> temp;
    if(temp < 3){
      cout << "0" << endl;
    }
    else if (temp % 2 == 0){
      cout << (temp /2) - 1 << endl;
    }
    else{
      cout << (temp - 1) / 2 << endl;
    }
  }
}
