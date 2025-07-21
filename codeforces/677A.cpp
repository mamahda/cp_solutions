#include <iostream>
 
using namespace std;
 
int main()
{
    int n, h, sum = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a / h < 1)
        {
            arr[i] = 1;
        }
        else
        {
            if (a % h == 0)
            {
                arr[i] = a / h;
            }
            else
            {
                arr[i] = a / h + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}

