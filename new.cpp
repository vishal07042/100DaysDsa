#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int firstOccurrence(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int first =-1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == x) {
            first = mid;
            //loox for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < x) {
            low = mid + 1; // loox on the right
        }
        else {
            high = mid - 1; // loox on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int last =-1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == x) {
            last = mid;
            //loox for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < x) {
            low = mid + 1; // loox on the right
        }
        else {
            high = mid - 1; // loox on the left
        }
    }
    return last;
}

int main()
{
    // vector <int > arr={2, 4, 6, 8, 8, 8, 11, 13};
   //  vector <int> arr={1, 3, 3, 3,3,5,5} ;
vector <int> arr={ 1 ,2, 4 ,4, 5 };

     int n=arr.size();
     int x=3;

int a=firstOccurrence(arr,n,x);

int b=lastOccurrence(arr,n,x);



cout<<b;
cout<<a;
    
    return 0;
}