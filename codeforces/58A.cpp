#include <iostream>
    
using namespace std;
 
int main()
{
    string s;
    char target[5] = {'h', 'e', 'l', 'l', 'o'};
    int x = 0, ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == target[x]){
            ans++;
            x++;
        }
    }
    if (ans == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
}

