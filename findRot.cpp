#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // vector<int> arr={16,17,18,19,9,10,11,12,13,14,15 };
    //  vector<int> arr={4, 1, 2, 3};
   // vector<int> arr = {3, 4, 5, 1, 2};

    // vector<int> arr = {35, 43, 45, 1, 2, 9, 12, 13, 19, 20, 26, 28, 29, 32};


   
 // vector <int> arr={  5 10 12 14 24 25 26 40 45 48 1 };


  //vector<int> arr = {5, 10, 12, 14, 24, 25, 26, 40, 45, 48, 1};
  vector <int > arr={37 41 45 47 5 6 9 12 26 27 31 33 34 35 36}; 


    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans=-1;

    while (s <= e)
    {
        if (arr[mid] < arr[mid - 1] and arr[mid] < arr[mid + 1])
        {
            ans = mid;

            break;
        }

        if (arr[s] > arr[mid] and arr[mid + 1] > arr[mid])
        {
            e = mid ;
        }
        else
        {
            s = mid + 1;
        }

        if(arr[n-2]>arr[n-1]){
            ans=n-1;
        }

        mid = s + (e - s) / 2;
    }


    cout << ans;
    cout<<endl;

    return 0;
}