#include <cstdio>

using namespace std;

int S(int n, int m){
  return ((n - m) & ((m - 1) / 2)) == 0;
}

int main(){
  int t, n, m;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &m);
    printf("%d\n", S(n, m));
  }
}
