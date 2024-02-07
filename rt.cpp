#include<iostream>
using namespace std;
#include<bits/stdc++.h>



int main()
{
    vector <int> arr={1, 3, 3, 3,3,5,5} ;

    int n= arr.size();
    int s=0;
    int e= n-1;

    int k=3;
 int ans;
    int mid= s+(e-s)/2;

    while (s<=e)
    {
       if(arr[mid]==k){
        ans=mid;
        s=mid+1;
        

       }

       if(arr[mid]>k){
       
         e=mid-1;
       }else{
        s=mid+1;
       }
       mid= s+(e-s)/2;
    }
    cout<<ans;
    


    
    return 0;
}