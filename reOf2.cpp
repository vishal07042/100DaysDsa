#include<iostream>
using namespace std;


int poww(int n){

    if(n==0 ) return 1;

     int  sm=  poww(n-1);

      int  bp = 2*sm;

      return bp;

}



int main()
{
      int  n=6;
       int  dd= poww(n);
       cout<<dd;
    return 0;
} 