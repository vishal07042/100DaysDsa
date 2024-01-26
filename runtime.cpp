#include<iostream>
using namespace std;


class Animal{
   public:
   void speak(){
    cout<<"speaking"<<endl;

   } 
};


class Dog:public Animal{

    public:
    // void speak(){
    //     cout<<"barking";
    // }




};
int main()
{


    Dog obj;
    obj.speak();
    
    return 0;
}