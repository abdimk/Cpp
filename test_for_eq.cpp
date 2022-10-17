#include <iostream>

using namespace std;

int main(){
    bool equal_result {false},not_equal_result{false};

    int num1{},num2{};

    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    
    cout << "equal result"<< equal_result<<endl;
    cout << "not equal result"<< not_equal_result;
}