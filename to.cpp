#include<iostream>
using namespace std;
#include<bits/stdc++.h>



int main()
{
    vector <int> arr={1, 3, 3, 3, 3, 3, 3} ;

    int n= arr.size();
    int s=0;
    int e= n-1;

    int k=3;
 int ans1;
 int ans2;
    int mid= s+(e-s)/2;

    while (s<=e)
    {
       if(arr[mid]==k){
        ans1=mid;
        e=mid-1;
        

       }

       if(arr[mid]<k){
       
         s=mid+1;
       }else{
        e=mid-1;
       }
       mid= s+(e-s)/2;
    }
    cout<<ans1;

      while (s<=e)
    {
       if(arr[mid]==k){
        ans2=mid;
        s=mid+1;
        

       }

       if(arr[mid]>k){
       
         e=mid-1;
       }else{
        s=mid+1;
       }
       mid= s+(e-s)/2;
    }
    cout<<ans2;
    


    
    return 0;
}