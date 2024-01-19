#include<iostream>
using namespace std;

void printing(int n){
    if(n==0  ) return ;

    cout<<n;
    cout<<endl;

     printing(n-1);

}

int main()
{
     int  n=6;
      printing(n);
    //  cout<<d;
    return 0;
}