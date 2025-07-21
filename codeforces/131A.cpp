#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    bool caps = true;
    cin >>
        s;
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            caps = false;
            break;
        }
    }
    if (caps)
    {
        for (int i = 0; i < s.length(); i++)
        {
            char u;
            if (islower(s[i]))
            {
                u = toupper(s[i]);
            }
            else
            {
                u = tolower(s[i]);
            }
            cout << u;
        }
    }
    else
    {
        cout << s;
    }
    return 0;
}
