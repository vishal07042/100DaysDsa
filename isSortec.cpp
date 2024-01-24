// #include<iostream>
// using namespace std;

// bool isSorted(int arr[],int size){

//     if(arr[size]<arr[size-1]){
//         return false;
//     }



//     isSorted(arr,size--);


//     return true;

// }

// int main()
// {
    
//     int arr[6]={2,4,6,9,11,13};
//   bool b= isSorted(arr,6);
//    cout<<b;
//     return 0;
// }





#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
   

    // Check if the last two elements are in non-decreasing order
    if (arr[size - 1] < arr[size - 2]) {
        return false;
    }

    // Recursively check the rest of the array
    return isSorted(arr, --size);
}

int main() {
    int arr[6] = {2, 4, 6, 9, 11, 13};
    bool b = isSorted(arr, 6);
    cout << b;

    return 0;
}