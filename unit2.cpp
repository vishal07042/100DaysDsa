#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
  //  vector<int> arr = {3, 3, 4, 4, 6, 7, 7, 9, 9};
    // vector<int> arr={1,1,2,2,4,5,5};
     // vector<int> arr={1 ,1, 3, 5, 5 };
     vector<int> arr= {1, 1, 4, 4, 15};

    int n = arr.size();
    vector<int> q;

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {

        if(arr[mid]!=arr[mid+1]  ){
            if(arr[mid]!=arr[mid-1]){ 
                q.push_back(arr[mid]);
                break;
             }
            
            
         }

        if (arr[s] + arr[e] == arr[s + 1] + arr[e - 1])
        {

        }

        else
        {

            if (arr[s] != arr[s + 1])
            {

             
                if (arr[s] != arr[s - 1])
                {
                    q.push_back(arr[s]);
                }
            }else if(arr[e]!=arr[e+1]){

                if(arr[e]!=arr[e-1]){
                    q.push_back(arr[e]);
                  }
                

            }

          
        }
        s = s + 2;
        e = e - 2;
    }

    for (int x : q)
    {
         cout << x;
    }

    return 0;
}