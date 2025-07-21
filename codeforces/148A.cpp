#include <iostream>
using namespace std;

int main(){
  int fight[4];
  int d, count = 0;
  cin >> fight[0] >> fight[1] >> fight[2] >> fight[3] >> d;
  for (int i = 1; i <= d; i++){
    if (i % fight[0] == 0 ||
        i % fight[1] == 0 ||
        i % fight[2] == 0 ||
        i % fight[3] == 0) {
        count++;
    }
  }
  cout << count << endl;
}
