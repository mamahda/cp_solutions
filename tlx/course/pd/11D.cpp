#include <bits/stdc++.h>
#include <string>
using namespace std;

int n, a, b, i, j;

void solve(int n){
    a = 1;b = n;
    for (i = 1; i <= trunc(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            j = n / i;
            if (i <= j )
            {
                if((j - i) < (b - a)){
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

