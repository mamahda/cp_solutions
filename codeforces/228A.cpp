#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long long n[4], ans = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }
    sort(n, n + 4);
    for (int i = 1; i < 4; i++)
    {
        if (n[i] == n[i - 1])
        {
            ans++;
        }
    }
    cout << ans;
 
    return 0;
}

