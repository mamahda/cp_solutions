#include <iostream>
using namespace std;

int main(){
  int n, count = 0;
  int min = 101, max = 0;
  int imax, imin, v = 0;
  bool swaped;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max){
      max = arr[i];
      imax = i;
    }
    if(arr[i] <= min){
      min = arr[i];
      imin = i;
    }
  }
  if(imin < imax) v = -1;
  else v = 0;
  //cout << imin+1 << endl;
  //cout << imax+1 << endl;
  //cout << n - (imin-1) << endl;
  //cout << imax-1 << endl;
  count = (n - (imin+1)) + (imax) + (v);
  cout << count << endl;
}
