#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int point[3] = {-1}, ans , i, temp;
  for(i = 0; i < 3; i++){
    cin >> point[i];
  }

  sort(point, point+3);
  ans = point[1] - point[0] + point[2] - point[1];
  cout << ans << endl;
}
