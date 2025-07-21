#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1], x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == x)
        {
            cout << i << endl;
            break;
        }
        
    }
    
    return 0;
}

