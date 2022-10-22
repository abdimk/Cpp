#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int num1{},num2{},num3{};
    vector <int> asending {};

    cout <<"Enter three numbers separated by spaces:";
    cin>>num1>>num2>>num3;

    if(num1 < num2 && num2 < num3){
        cout << num1 <<" "<<num2<<" "<<num3<<endl;
    }
    if(num1 < num3 && num3 < num2){
        cout << num2 <<" "<<num1 <<" "<<num3<<endl;
    }
    if(num2 < num1 && num1 < num3){
        cout << num2 << "" <<num1 <<" "<< num3<<endl;
    }
    if (num2 < num3 && num3 << num1){
        cout << num2 <<" "<< num3 <<" "<<num1<<endl;
    }
    if (num3 < num1 && num1 < num2){
        cout << num3<<" "<<num1<<" "<<num2<<endl;
    }
    if(num3 < num2 && num2 < num1){
        cout << num3 <<" " <<num2<<" "<<num1<<endl;
    }



}

