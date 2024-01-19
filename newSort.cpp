#include<iostream>
using namespace std;

int main()
{
    int arr[]={ 4, 5, 4 ,4 ,4};

    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>arr[i+1]){
            cout<<"not_sorted"<<endl;

        }
    }
    
    return 0;
}