#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
 //  vector<int>  arr= {3,3,7,7,10,11,11};
vector<int>  arr={1 ,1 ,4, 4, 15};
 //vector <int> arr={1 ,1, 3, 5, 5 };
    
     int n=arr.size();

     int s=0;
      int  e=n-1;
      int mid=s+(e-s)/2;
      int ans=-1;

      while(s<=e){ 
        if(arr[mid]!= arr[mid+1] and arr[mid]!= arr[mid-1]){ 
            ans=mid;
          
         }
            if(arr[mid]!=arr[mid+1] and arr[mid+1]!=arr[mid+2]){ 
                s=mid+1;
             }else{
                e=mid-1;
             }

            mid=s+(e-s)/2;
        
       }
     cout<<ans;
    return 0;
}