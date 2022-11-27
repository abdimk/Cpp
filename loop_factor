//creating factoral function using loop (with out recursive function)

#include <iostream>

using namespace std;


unsigned long long factor(unsigned long long num){
    if(num == 0)
        return 1;
    return num * factor(num - 1);

}

unsigned long long loop_factor(unsigned long long num){
    int total{1};
    for(int x{1}; x <= num; x++){
        total*=x;
    }
    return total;
}


int main(){
    cout<<factor(5)<<endl;
    cout<<loop_factor(5)<<endl;
    return 0;

}
