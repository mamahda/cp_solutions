#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n, i, arr[200001] = {};
  cin >> n;
  for (i = 0; i < n-1; i++)
  {
    int temp;
    cin >> temp;
    arr[temp-1]++;
  }

  for (int i = 0; i < n; i++)
  {
    if(arr[i] == 0) {
      cout << i + 1;
      break;
    }
  }
}
