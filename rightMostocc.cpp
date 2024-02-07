#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{

   // vector<int> p={1,2,6,6,6,6,6,6,8};

     vector <int> p={0, 0, 1, 1, 2, 2, 2, 2};



       int n = p.size();
    int k=2;

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;


while (s<=e)
{
     if(p[mid]==k  &&  p[mid+1] ==k  ){
        s=mid;
         mid = s + (e - s) / 2;
         //cout<<mid;
     }

     if(p[mid]==k && p[mid+1]>k){
        cout<<mid;
        break;

     }

     


    if(p[mid]<k){
        s=mid+1;

    }
    
    if(p[mid]>k){
        e=mid-1;
    }
}


    
    return 0;
}