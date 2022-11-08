#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(){
    int a {12};
    int b {24};

    cout << a << " "<< b <<endl;

    swap(a,b);

    cout << a <<" "<< b <<endl;
}



void swap(int &a, int &b){
    int temp {};
    temp = a;
    a = b;
    b = temp;
}
