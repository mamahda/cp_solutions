#include <iostream>
using namespace std;

int main(){
  string str;
  int arr[26] = {0}, count = 0;
  getline(cin, str);
  if(str.size() == 2){
    cout << 0 << endl;
    return 0;
  }
  for( int i = 1; i < str.size(); i += 3){
    if(arr[str[i] - 'a'] == 0) count++;
    arr[str[i] - 'a'] = 1;
  }  
  cout << count << endl;
}

