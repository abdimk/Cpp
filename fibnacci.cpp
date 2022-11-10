#include <iostream>


using namespace std;

unsigned long long fibnacci(unsigned long long number);


unsigned long long fibnacci(unsigned long long number){
    if(number <= 1)
        return number;
    return fibnacci(number - 1) + fibnacci(number - 2);
}

int main(){
    cout<<fibnacci(30)<<endl;
    cout<<fibnacci(40)<<endl;
    return 0;
}


