/* read an integer value from the keyboard and display a message
indicating if the this number is odd or even
*/
#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Enter the number:";
    cin >> number;

    cout <<number <<" is "<<((number % 2 == 0)? "even":"odd")<<endl;
}

