#include <iostream>
using namespace std;

void isSorted(int arr[], int s)
{

    if (s < 0)
        return;

    if (arr[s] > arr[s + 1])
    {
        cout << "not_Sorted"
             << " ";
        cout << arr[s];
        cout << " " << arr[s + 1];
        return;
    }

    isSorted(arr, s--);
}

int main()
{
    int s = 6;
    int arr[6] = {2, 4, 7, 9, 11, 13};

    isSorted(arr, s);
    return 0;
}