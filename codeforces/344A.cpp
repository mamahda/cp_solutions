#include <iostream>
 
using namespace std;
 
int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    string prev = " ";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s != prev)
        {
            count++;
            prev = s;
        }
    }
    cout << count << endl;
 
    return 0;
}

