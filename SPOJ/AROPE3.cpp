#include <iostream>
#include <ext/rope>
#include <algorithm>
using namespace std;
using namespace __gnu_cxx;

int main(){
  string s;
  cin >> s;

  rope<char> r(s.c_str());

  int q;
  cin >> q;

  while(q--){
    int cmd;
    cin >> cmd;

    if(cmd == 1){
      int x, y;
      cin >> x >> y;

      rope<char> segment = r.substr(x, y - x + 1);

      reverse(segment.mutable_begin(), segment.mutable_end());

      r.erase(x, y - x + 1);

      r.insert(0, segment);

    } else if(cmd == 2){
      int x, y;
      cin >> x >> y;

      rope<char> segment = r.substr(x, y - x + 1);

      reverse(segment.mutable_begin(), segment.mutable_end());

      r.erase(x, y - x + 1);

      r.insert(r.length(), segment);

    } else {
      int y;
      cin >> y;
      cout << r[y] << '\n';
    }
  }

  return 0;
}
