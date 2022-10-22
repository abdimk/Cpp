// find the average,maximum,minimum and sum of three numbers given by the user

#include <iostream>

using namespace std;

int main()
{
    int num1{},num2{},num3{};
    int sum{};
    int average{};
    int maximum{};
    int minimum{};


    cout <<"Enter three numbers: ";
    cin >>num1>>num2>>num3;

    sum = (num1+num2+num3);

    average = (sum)/3;

    maximum = ((num1 > num2)? num1:((num3 > num1)? num3 : num1));

    minimum = ((num1 < num2)? num1:((num2 < num3)? num2:num3));

    cout<<"sum: "<<sum<<endl;
    cout<<"average: "<<average<<endl;
    cout<<"maximum: "<<maximum<<endl;
    cout<<"minimum: "<<minimum<<endl;


    return 0;





}
