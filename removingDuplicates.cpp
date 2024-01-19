#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 2, 2, 3, 3, 4, 5, 6};

    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 9; j++)
        {

            if(arr[i]==arr[j]){
               arr[j]=-1;
               continue;
               
            }


        }
cout<<arr[i];
    }

    return 0;
}