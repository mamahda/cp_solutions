#include <iostream>
using namespace std;

int main(){
  int n, odd = 0, even = 0;
  int oddidx, evenidx;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    if (arr[i] % 2 == 0) {
      even++;
      evenidx = i +1;
    }
    else {
      odd++;
      oddidx = i +1;
    }
  }
  if (odd == 1) cout << oddidx << endl;
  else cout << evenidx << endl;
}

