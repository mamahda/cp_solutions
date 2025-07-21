#include <iostream>   
using namespace std;
 
int main()
{
    string s1, s2;
    int ans1, ans2;
    cin >> s1 >> s2;
 
    for (auto& x : s1) { 
        x = tolower(x); 
    } 
    for (auto& x : s2) { 
        x = tolower(x); 
    } 
    for (int i = 1; i < s1.size(); i++)
    {
        ans1 = s1[i] - s1[i-1];
        ans2 = s2[i] - s2[i-1];
    }
    if (s1 < s2)
    {
        cout << "-1";
    }
    else if(s1 > s2)
    {
        cout << "1";
    }
    else{
        cout << "0";
    }
    
 
    return 0;
}
