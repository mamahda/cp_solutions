#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], x[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if(i != 0){
            x[i] = x[i-1] - a[i] + b[i];
        }
        else{
            x[i] += b[i];
        }
    }
    sort(x, x+n);
    cout << x[n-1] << endl;
    
    return 0;
}

