#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    int ans;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if(tolower(s[i]) != tolower(t[i]))
        {
            cout << "x_x" << endl;
            return 0;
        }
    }
    cout << "20/20" << endl;
    return 0;
}

