#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int n, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    double ans = (double)sum / n;
    cout << fixed << setprecision(12) << ans;
 
    return 0;
}

