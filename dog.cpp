#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

       public:  
       void speak(){
        cout<<"bauk kote"<<endl;
         
       }
};


 class  Dog:public Animal{
     
 };

int main()
{
    Dog d;
    d.age=13
    d.speak();
    cout<<d.age<<endl;



    return 0;
}