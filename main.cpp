#include <iostream>

using namespace std;

int main(){
  
    int num1{},num2{},num3{};
    const int count {3};  
    cout <<"Enter 3 integers:";
    
    cin >> num1 >> num2 >> num3;

    int sum {num1 + num2 + num3};
    double average;
    average = static_cast <double> (sum) / count;

    cout <<"sum: "<<sum<< endl;
    cout<<"average: "<<average<<endl;

    cout <<"integers entered:"<<num1<<" " << num2 <<" "<< num3 <<endl;
    cout<<"average of three integers:"<<average<<endl;

    return 0;
}

