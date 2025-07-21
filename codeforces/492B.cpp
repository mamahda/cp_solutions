#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    double a[n + 2];
    a[0] = 0;
    a[n + 1] = l;
    double maxDiff = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n + 2);
    for (int i = 1; i <= n + 1; i++)
    {
        if (i == 1 || i == n + 1)
        {
            if (maxDiff < a[i] - a[i - 1])
            {
                maxDiff = a[i] - a[i - 1];
            }
        }
        else
        {
            if (maxDiff < (a[i] - a[i - 1]) / 2)
            {
                maxDiff = (a[i] - a[i - 1]);
                maxDiff /= 2;
            }
        }
    }
    cout << fixed << maxDiff << setprecision(10) << endl;

    return 0;
}
