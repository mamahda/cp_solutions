#include <iostream>
using namespace std;

int main(){
  int xidx,yidx;
  for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      int temp;
      cin>>temp;
      if(temp==1){
        xidx=i;
        yidx=j;
      }
    }
  }
    cout << abs(xidx-2) + abs(yidx-2) << endl;
}
