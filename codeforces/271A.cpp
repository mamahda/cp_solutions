#include <iostream>
using namespace std;
 
int main()
{
    int n, t;
    cin >> n; 
    t = n;
    while (true)
    {
        t++;
        int a = t / 1000;
        int b = t / 100 % 10;
        int c = t / 10 % 10;
        int d = t % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << t << endl; 

    return 0;
}

