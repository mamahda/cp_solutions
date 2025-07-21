#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    priority_queue<int> pq;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1){
            cin >> y;
            pq.push(y);
        }else if(x == 2){
            cout << pq.top() << endl;
        }else{
            pq.pop();
        }
    }
}
