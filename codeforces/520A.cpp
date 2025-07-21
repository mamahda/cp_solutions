#include <iostream>
using namespace std;

#define ascii 123

int main(){
  int n;
  bool ans = true;
  cin >> n;
  if (n < 20){
    cout << "NO" << endl;
    return 0;
  }
  int arr[ascii]={0};
  while (n--){
    char temp;
    cin >> temp;
    arr[tolower(temp)]++;
    // cout << (int) tolower(temp) << endl;
  }
  for(int i = 97; i < ascii; i++){
    if (arr[i] == 0) {
      ans = false;
    }
   // else cout << i - 96 << endl;
  }

  if(ans)
    cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
