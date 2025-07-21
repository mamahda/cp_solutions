#include <bits/stdc++.h> 

int main(){
	int a,x;
	scanf("%d %d", &a, &x);
	int n = x / a;
	int m = x % a;
	printf("%d %d", n, m);
}
