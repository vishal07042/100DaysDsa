#include<iostream>
using namespace std;

int Tsum(int arr[],int size){
    int sum=0;
    if(size<0){
        return  0;
    }

    sum=sum+arr[size-1];
--size;
    Tsum(arr,size);

    return sum;





}

int main()
{
      int arr[6] = {2, 4, 6, 9, 11, 13};
       int  b= Tsum(arr,6);
    return 0;
}