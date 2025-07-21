#include <iostream>
using namespace std;

int main(){
  int k,n,w;
  cin >> k >> n >> w;
  int price = 0;
  for(int i = 1; i <= w; i++){
    price += k * i;
  }
  if(price - n >= 0)
    cout << price - n << endl;
  else cout << "0";
}
