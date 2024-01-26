#include<iostream>
using namespace std;


class Level1{
    public:
    int level;

    public:
    void leve(){
        cout<<"this is my level1"<<endl;
    }
};


class Level2:public Level1{
    public:
    int leevel;
    void work(){
        cout<<"level 2 working"<<endl;
    }
};

 class Level3:public Level2{
    public:
    int level3;
    void working(){
        cout<<" this is level 3 and all is well here"<<endl;
        
    }
 };

int main()
{
   Level3 kutta;
    kutta.level=46;
   cout<<kutta.level; 
    return 0;
}