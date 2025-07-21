#include <bits/stdc++.h>

int main(){
	int a,i,jumlah[1000],max,min;
	scanf("%d",&a);
	
	for(i=1;i<=a;i++) {
		scanf("%d",&jumlah[i]);
	}
	max=jumlah[1];
	min=jumlah[1];
	
	for(i=1;i<=a;i++) {
		if (jumlah[i]>=max) {
			max=jumlah[i];
		}
		else if (jumlah[i]<=min) {
			min=jumlah[i];
		}
	}
	printf("%d %d\n",max,min);
}
