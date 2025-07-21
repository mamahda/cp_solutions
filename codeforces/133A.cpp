#include <iostream>
using namespace std;
 
int main()
{
    string s;
    bool ans = false;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            ans = true;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}

