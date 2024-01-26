#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    public:
    int size;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w,int b)
    {
        this->weight = w;
    }
};

class Male : public Human 
{

public:
    string color;

    void sleep()
    {
        cout << "male is sleeping" << endl;
    }
};

int main()
{

    Male object1;
    //   object1.
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    object1.size=17;
    cout<<object1.size<<endl;

    
 //   cout <<"outing typeod "<<typeid(object1).name();

    //setting color usig dot notation
      object1.color="blue";
    cout << object1.color << endl;
    object1.setWeight(84,6);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;


     
}