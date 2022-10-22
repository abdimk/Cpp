//find the average of two numbers by the user
#include <iostream>

using namespace std;

int main()
{
   int num1{},num2{};

   cout<<"Enter two numbers separated by space:";
   cin>>num1>>num2;

   int average{(num1 + num2)/2};

   cout<<"The average of "<<num1<<" and "<<num2<<" is: "<<average<<endl;

}
