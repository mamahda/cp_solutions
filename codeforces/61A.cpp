#include <iostream>
 
using namespace std;
 
int main()
{
    string one;
    string two;
    string ans = "";
    cin >> one >> two;
    for (int i = 0; i < one.length(); i++)
    {
        if (one[i] == two[i])
            ans = ans + "0";
        else
            ans = ans + "1";
    }
    cout << ans << endl;
 
    return 0;
}

