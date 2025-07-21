#include <bits/stdc++.h>
#include <string>
using namespace std;

int n, a, b, a1, bn;

void solve(int n){
    a = 1;b = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i * j == n)
            {
                if ((j - i) < (b - a))
                {
                    a = i;b = j;
                }
                
            }
            
        }
        
    }
    
}

int main() {
    cin >> n;
    solve(n);
    cout << a << " " << b;
}

