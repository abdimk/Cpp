// addis abeba universty worksheet in cpp



// receive a number and determine whether it is odd or even.
#include <iostream>

using namespace std;

int main()

// using condtional operator
{

    int num{};

    cout << "Enter a number:";
    cin >> num;

    cout<< num << " is "<<((num % 2 == 0) ? "even" : "Odd");
}





/*
{

    int num {};

    cout <<"Enter a number:";
    cin >>num;

    // using if else
    if(num % 2 == 0){
        cout << num<<" is even number";
    }else
        cout << num<<" is odd number";

}
*/
