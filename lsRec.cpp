#include <iostream>
using namespace std;

int  ls(int arr[],int size,int key){

    if(arr[size-1]==key){
        return key;
    }

    ls(arr,--size,key);

    return 0;





}



int main()

{
    int arr[6] = {2, 4, 6, 9, 11, 13};
    int b = ls(arr, 6 ,4);

    if(b){
        cout<<"found";
    }else{
        cout<<"not found";
    }


    return 0;
}
