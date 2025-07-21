#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main()
{
    string t, s;
    int ans = 0;
    cin >> t >> s;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
