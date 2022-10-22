// add the even numbers between 0 and any positive integers given by the user

#include <iostream>

using namespace std;

int main()
{
    int instantiate{};
    int total{};
    cout<<"Enter any number grater than 0:";
    cin >> instantiate;

    for(int i{0}; i < instantiate; i++){
            if(i % 2==0)
                total+=i;


    }
    cout<<"The total is: "<<total<<endl;
    return 0;

}

