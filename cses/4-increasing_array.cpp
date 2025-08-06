#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll i, count = 0, temp, n, arr[200002] = {};
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> temp;
    arr[i] = temp;
  }

  for (int i = 0; i < n-1; i++)
  {
    if(arr[i] > arr[i+1]){
      count += arr[i] - arr[i+1];
      arr[i+1] += arr[i] - arr[i+1];
    }
  }

  cout << count;
}