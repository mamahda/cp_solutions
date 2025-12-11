#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  string str;
  ll i, max = 1, temp = 1;
  cin >> str;
  for (i = 1; i < str.length(); i++)
  {
    if (str[i] == str[i - 1])
      temp++;
    else
      temp = 1;
    if (temp > max)
      max = temp;
  }
  cout << max;
}
