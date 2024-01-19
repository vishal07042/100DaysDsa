#include<iostream>
using namespace std;



int factorial(int d){

    if(d==1) return 1;
    d=d * factorial(d-1);
    return d;
}

int main()
{
     int  n=3;

      int  ans= factorial(n);
      cout<<ans;
    return 0;
}