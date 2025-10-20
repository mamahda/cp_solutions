#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    string str, res;
    cin >> str;
    stack<char> operation;
    int len = str.length();

    for(int i = 0; i < len; i++){
      if(str[i] == '(') continue;
      else if(str[i] ==')'){
        res.push_back(operation.top());
        operation.pop();
      }
      else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
        operation.push(str[i]);
      }
      else {
        res.push_back(str[i]);
      }
    }
    for(int i = 0; i < res.size(); i++){
      cout << res[i];
    }
    cout << endl;
  }
}
