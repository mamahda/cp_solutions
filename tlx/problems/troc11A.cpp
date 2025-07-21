#include <bits/stdc++.h>
using namespace std;

string s;
int x = 0, y = 0;

int main(){
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R'){
            x = x + 1;
        }else if(s[i] == 'L'){
            x = x - 1;
        }else if(s[i] == 'U'){
            y = y + 1;
        }else if(s[i] == 'D'){
            y = y - 1;
        }
    }
    cout << x << " " << y << endl;
}
