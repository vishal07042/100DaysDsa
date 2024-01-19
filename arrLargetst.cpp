#include <iostream>
using namespace std;

int main()
{
    int ans;
    //   int  arr[]={22,97,213,87,45,67,89};

    int arr[] = {4, 7, 8, 6, 7, 6};

    for (int i = 0; i < 6; i++)
    {
        ans=arr[i];

          for (int j = 1; j< 6; j++)
          {
            if(arr[j]>ans){
               ans=arr[j];
            }
            
          }
          
        
    }
    cout<<ans;

    return 0;
}