#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int m = 64;
    int s = 0;
    int e = m;
    int mid = s + (e - s) / 2;

    int ans = 0;

    while (ans < n)
    {
        
        ans++;
        
        mid = s + (e - s) / 2;
        e=mid;

        
    }
     cout<<mid;
    

    return 0;
}