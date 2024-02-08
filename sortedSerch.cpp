#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
     vector<int> arr={12, 15, 18, 2, 4};
  // vector<int> arr={4,5,6,7,0,1,2};
 // vector <int> arr={1 ,8, 1, 5, 3} ;
  //vector <int> arr={3,4,5,1,2} ;
 //vector <int > arr={25 ,30 ,5, 10, 15 ,20} ;
 // vector <int> arr={11,27, 31, 43, 45, 46 ,5, 11, 13, 18, 19 } ;
   int s=0;
   int n= arr.size();
   int e= n-1;
   int mid= s + (e-s)/2;
  //  int  key =6;
    int ans;

   while (s<=e)
   {
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        ans=mid;


    }

    if(arr[mid-1]>arr[mid]){
        e=mid-1;

    }
    else{
        s=mid+1;
    }
    // if(arr[mid+1]>arr[mid]){
    //      s=mid+1;
    // }
     mid=s + (e-s)/2;
   }
   
    cout<<arr[ans];
    return 0;
}