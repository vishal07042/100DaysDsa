#include<iostream>
using namespace std;

// No return type specified, default is int
 int foo() {
    cout << "This function is assumed to return int." << endl;
  return 0;
};

int main() {
   // foo();
  // cout<<  sizeof(typeid(foo()).name());
  cout<<sizeof(foo());
    
    return 0;
}