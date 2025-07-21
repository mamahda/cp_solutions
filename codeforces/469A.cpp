#include <iostream>
using namespace std;

int main(){
  int n;
  int p, q;
  cin >> n >> p;
 int arr[n+1] = {0};
  for (int i = 0; i < p; i++){
    int temp;
    cin >> temp;
    arr[temp]++;
  }
  cin >> q;
  for ( int i = 0; i < q; i++ ){
    int temp;
    cin >> temp;
    arr[temp]++;
  }
  for (int i = 1; i <= n; i++){
    if(arr[i] == 0){
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
  cout << "I become the guy." << endl;
}
