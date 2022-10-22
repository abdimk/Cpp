#include <iostream>
// add numbers between 0 and 100 then display the sum
using namespace std;

int main()
{
    int total{};

    for(int i{1}; i <= 100; i++)
        total += i;

    cout<<"The total sum is: "<<total<<endl;
}
