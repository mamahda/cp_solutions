#include <iostream>
using namespace std;

struct data {
  string name;
  int count;
};

struct data user[100001];
int k = 0;

void search(string name){
  for(int i = 0; i <= k; i++){
    if(name == user[i].name){
      cout << user[i].name << user[i].count << endl;
      user[i].count++;
      return;
    }
  }
  cout << "OK" << endl;
  user[k].name = name;
  user[k].count = 1;
  k++;
}


int main(){
  int t;
  cin >> t;
  while(t--){
    string temp;
    cin >> temp;
    search(temp);  
  }
}
