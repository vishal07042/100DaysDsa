

#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 5, 9};
    int n = arr.size();
    int limit = 6;
    int ansf = -1; // Initialize ansf to -1, indicating no valid answer found yet
    
    
    for (int j = 1; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int ans = arr[i] / j;
           ans= ceil(ans);
            sum += ans;
        }

        if (sum <= limit) {
            ansf = j; // Uarrdate the answer if the sum is less than or equal to the threshold
            break; // Exit the looarr once a valid answer is found
        }
    }

    cout << ansf << endl; // Outarrut the smallest divisor found

    return 0;
}
