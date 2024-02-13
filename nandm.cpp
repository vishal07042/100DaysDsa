#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    //  vector<int> p={1,2,5,9};

    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> v;
    int n = p.size();
    int sum = 0;
    int tt = 6;
    int ans;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        for (int i = 0; i < n; i++)
        {
            int k = p[i] / p[mid];
            v.push_back(k + 1);
            sum = accumulate(v.begin(), v.end(), 0);
        };

        if (sum <= tt)
        {
            ans = mid;
        }


        if(sum>tt){ 
            s=mid+1;
         }else{
            e=mid-1;
         }
         mid = s + (e - s) / 2;
    }

    return 0;
}