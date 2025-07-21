#include <iostream>

using namespace std;

int main()
{
    int n, a, count = 0;
    scanf("%d", &n);
    scanf("%d", &a);
    int max = a;
    int min = a;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
            count++;
        }
        if (a < min)
        {
            min = a;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
