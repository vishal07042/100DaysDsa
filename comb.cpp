#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int rightMost(vector<int>& arr, int n, int k){
  
    

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while(s<=e){

        
          if(arr[mid-1]==k && arr[mid]==k){

            e=mid;
            mid = s + (e - s) / 2;

          }



          if(arr[mid-1]<k && arr[mid]==k){

           return mid;
            break;
          

          }

            if(arr[mid]<k && arr[mid+1]==k){
            return mid+1;
            break;
        }
         

        if(arr[mid]<k){
          s=mid+1;
        }

        if(arr[mid]>k){
          e=mid-1;
        }

     
    }
   return mid;
}

int leftMost(vector<int>& arr, int n, int k){
  
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;


while (s<=e)
{
     if(arr[mid]==k  &&  arr[mid+1] ==k  ){
        s=mid;
         mid = s + (e - s) / 2;
         //cout<<mid;
     }

     if(arr[mid]==k && arr[mid+1]>k){
     return  mid;
        break;
       
      

     }


   if(arr[mid]>k && arr[mid-1]==k){
            return mid-1;
            break;
        }
     
    if(arr[mid]<k){
        s=mid+1;

    }
    
    if(arr[mid]>k){
        e=mid-1;
    }
}

 return mid;
}

int main()
{
  //  vector<int> arr={1,2,2,6,6,6,7,7,8};
    vector <int> arr={0, 0, 1, 1, 2, 2, 2, 2};
    int n= arr.size();
    int k=2;
 int  a=rightMost(arr,n,k);
 int  b=leftMost(arr,n,k);
   cout<<a<<" "<<b;
    return 0;
}