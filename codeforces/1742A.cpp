#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;
        if (a + b == c || a + c == b || c + b == a)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
