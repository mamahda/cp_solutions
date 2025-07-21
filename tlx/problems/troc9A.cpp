#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
int ans = 0;

int main(){
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'O'){
            ans++;
        }
    }
    if(ans == 1)
    {
        cout << "Ya";
    }else if(ans != 1){
        cout << "Tidak";
    }
    
}
