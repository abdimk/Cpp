#include <iostream>

using namespace std;

int main()
{

    int number{};
    cout << "Enter a number to start counting up:";
    cin >>number;

    int i{0};

    while(number >= i){
        cout<<i<<endl;
        ++i;
    }
    cout << "done.."<<endl;
}
