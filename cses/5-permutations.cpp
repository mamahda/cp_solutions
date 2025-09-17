<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll n;
  cin >> n;
  if (n == 1){
    cout << "1";
    return 0;
  }
  if (n > 3)
  {
    ll first = n - 1, second = n;
    while (first > 0)
    {
      cout << first << " ";
      first -= 2;
    }
    while (second > 0)
    {
      cout << second << " ";
      second -= 2;
    }
  }
  else
    cout << "NO SOLUTION";
}
