#include<iostream>
using namespace std;

int main()
{
    int w=5;
     string ww="prime";

    for(int i=2;i<w;i++){



        if(w%i==0){

            ww="not prime";
        }
        
    }; 
    cout<<ww;
    return 0;
}