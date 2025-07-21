#include <iostream>
using namespace std;
 
int main()
{
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            ans++;
        }
        
    }
    if (ans == 4 || ans == 7)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}
