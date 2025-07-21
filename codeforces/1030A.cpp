#include <iostream>
using namespace std;
 
int main()
{
    bool easy = true;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            easy = false;
        }
    }
    if (easy)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
 
    return 0;
}
