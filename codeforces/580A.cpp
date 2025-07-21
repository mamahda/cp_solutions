#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    long long a[2];
    long long inc[2] = {0, 1};
    cin >> a[0];
    for (long long i = 1; i < n; i++)
    {
        cin >> a[1];
        if (a[1] < a[0])
        {
            int temp;
            if (inc[0] > inc[1])
            {
                temp = inc[0];
            }
            else
            {
                temp = inc[1];
            }
            inc[0] = temp;
            inc[1] = 1;
        }
        else
        {
            inc[1]++;
        }
        a[0] = a[1];
    }
    cout << max(inc[0], inc[1]) << endl;
 
    return (long long)0;
}

