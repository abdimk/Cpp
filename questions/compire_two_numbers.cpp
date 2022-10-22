// obtain two numbers from the keyboard and determine and display which if either is the lager of the two number.

#include <iostream>

using namespace std;


int main()
{

    int num1{},num2{};
    int larger{};
    int smaller{};

    cout << "Enter two numbers separated by spaces:";
    cin >> num1>>num2;
    if (num1 == num2){
            cout<<"yo! The numbers can't be the same";
    }


    else{
        larger = (num1 > num2) ? num1:num2;
        smaller = (num1 < num2) ? num1:num2;

        cout<<"Larger: "<<larger<<endl;
        cout<<"Smaller: "<<smaller<<endl;
    }
}


