#include <iostream>
#include <string>

using namespace std;

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 1; i <= t; i++){
    int idx;
    string str;
    cin >> idx >> str;

    int s_str = str.length();
    if(idx > s_str){
      cout << i << " " << s_str << endl;
      continue;
    }
    else {
      cout << i << " ";
      for (int j = 0; j < s_str; j++){
        if(idx - 1 == j) {
          continue;
        }
        cout << str[j];
      }
    }
    cout << endl;
  }
  return 0;
}
