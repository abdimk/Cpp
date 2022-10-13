#include <iostream>

using namespace std;

int main(){

    int counter {10};
    int result {0};

    cout<<"Counter "<<counter<<endl;
    
    counter = counter + 1;

    cout<<"Counter "<<counter<<endl;

    counter ++; // post increment 
   // pre increment 
   // ++ counter;
   // the pre increment and post increament works exactly the same

    cout<<"Counter "<<counter<<endl;

    result = ++counter; // pre increment assighnment 
    
}
