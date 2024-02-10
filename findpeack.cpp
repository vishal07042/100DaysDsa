#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
  //  vector<int> nums={1,2,1,3,5,6,4};
  //  vector<int> nums={1,2,3,1};
 // vector <int> nums  = { 3, 4, 5, 1, 2};
  //  vector<int> nums={2, 3, 4, 1};
  vector <int> nums={2,1};
  
     int  n=nums.size();
      int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s<=e){
        

        if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]){ 
            ans=mid;
            break;
         }

         if(nums[mid]<nums[mid+1] and nums[mid]>nums[mid-1]){ 
            s=mid+1;

          }else{
            e=mid-1;
          }
               mid = s + (e - s) / 2;


     }
     cout<<"index is "<<ans;
     cout<<endl;
     cout<< "value  is "<<nums[ans];
    return 0;
};