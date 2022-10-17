#include <iostream>

using namespace std;


int main(){
    const int upper_limit {10};
    const int lower_limit {20};
    int num1{},num2;

    cout << "Enter an integer that is greater than "<<upper_limit<<":"<<endl;
    cin >> num1;
    cout<< boolalpha;
    cout << num1 <<" > "<<upper_limit<<"is"<<(num1>upper_limit)<<endl;
    cout << "Enter an integer that is less than or equal to "<<upper_limit<<":"<<endl;
    cin >> num2;

    

   

    return 0;
}