#include<iostream>
using namespace std;

class ClassKaNaam{
 public:
    char naam[100];
    int health;
     int   level;

 
        

};

class Hero{
   public:
   int heat;
   int data;
};

int main()
{

    ClassKaNaam v;
    v.health =40;
    cout<<v.health;
    int *p  = new int;

    Hero *b = new Hero;
    cout<<p;
    cout<<endl;

     cout<<b;

    
    
    return 0;
}