#include <iostream>

using namespace std;

int main()
{

    int number{};
    cout <<"Enter a positive integer to start the count down:";
    cin >> number;

    while(number > 0){
        cout<<number<<endl;
        --number;

    }
    cout<<"blastoff!"<<endl;
}
