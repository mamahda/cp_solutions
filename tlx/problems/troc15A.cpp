#include <bits/stdc++.h>
using namespace std;

int d = 1,b = 0,c = 0;

void solve(int n){
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i > 0){
            if (a[i] == a[i-1])
            {
                d++;
            }
            else if (a[i] > a[i-1])
            {
                b++;
            }
            else if (a[i] < a[i-1])
            {
                c++;
            }
        }
    }
    if (d == n)
    {
        cout << "EQUAL";
    }
    else if(b > 0 && c == 0)
    {
        cout << "NONDECREASING";
    }
    
    else if(c > 0 && b == 0)
    {
        cout << "NONINCREASING";
    }
    else{
        cout << "NONE";
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
}

