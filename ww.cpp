#include <iostream>
#include <vector>
#include <cmath> // for ceil function
using namespace std;
int sum = 0;

int main() {
    // vector<int> p = {1, 2, 3, 4, 5};
    vector<int> p={1,2,5,9}; // Input array
    int n = p.size();
    int tt = 6; // Threshold
    int ansf = 0; // Initialize ansf to 0, indicating no valid answer found yet
    bool found = false; // Flag to indicate if a suitable divisor is found

    for (int j = 1; j < n; j++) {
        
        cout<<sum;
        cout<<endl;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)p[i] / j); // Use ceil function for integer division
        }

        if (sum <= tt) {
            ansf = j; // Update the answer if the sum is less than or equal to the threshold
            found = true; // Set the flag to true
            break; // Exit the loop once a valid answer is found
        }
        
        cout<<sum;
        cout<<endl;
    }

    // if (!found) {
    //     cout << "No valid divisor found." << endl;
    // } else {
    //     cout << ansf << endl; // Output the smallest divisor found
    // }

    return 0;
}
