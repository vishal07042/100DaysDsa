#include <iostream>
using namespace std;

int main()
{

    
    int secondlargest=-1;
    int ans;
    int arr[] = {12, 34, 11, 415, 67, 34};

    for (int i = 0; i < 6; i++)
    {
        ans = arr[0];

        for (int j = 1; j < 5; j++)
        {
            if (arr[j] > ans)
            {
                ans = arr[j];
            }

        }

        if(arr[i]>secondlargest && arr[i] !=ans){
            secondlargest=arr[i];
        }
        
       



    }
    cout<<secondlargest;
    

    return 0;
}