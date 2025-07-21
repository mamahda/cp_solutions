#include <bits/stdc++.h> 

int arr[1001];

int main(){
	int a,b,i,ans;
	scanf("%d", &a);
	for(i = 1; i <= a;i++){
		scanf("%d", &b);
		arr[b]++;
	}
	ans = 1;
	for(i = 2; i<=1000;i++){
		if(arr[ans]<=arr[i]){
			ans=i;
		}
	}
	printf("%d", ans);
}
