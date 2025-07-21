#include <bits/stdc++.h>

int main(){
	int a,x=0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", x);
            x = x + 1;
            if (x == 10)
            {
                x = 0;
            }
            
        }
        
        printf("\n");
    }
}
