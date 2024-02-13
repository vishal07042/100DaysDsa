#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int n = 5;
    int m = 243;
    int s = 0;
    int e = m;
    int mid = s + (e - s) / 2;

    int ans = 0;

    while (ans < n)
    {
        
        ans++;
        
        mid = s + (e - s) / 2;
        e=mid;

        if(pow(mid,n)>m){ 
            e=mid-1;
         }else{
            s=mid+1;
         }

        
    }
  cout<<s; 
  cout<<endl;
  cout<<e;


    


    return 0;
}