#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, a[105], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
        if (ans > sum / 2)
        {
            cout << i + 1 << endl;
            break;
        }
    }
 
    return 0;
}

