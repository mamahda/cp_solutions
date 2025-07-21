#include <bits/stdc++.h> 
using namespace std;
	
int main(){
	int n,a,b,c;
	scanf("%d %d %d %d", &n,&a,&b,&c);
	if(n%b!=0 && n%a==0 || n%c==0){
		printf("YES");
	}else{
		printf("NO");
	}
}
