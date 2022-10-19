#include <iostream>

using namespace std;

int main()
{
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};



    int change_amount{};


    cout <<"Enter an amount in cents:";
    cin >> change_amount;
    
    int balance{},dollar{},quartes{},dimes{},nickel{},pennies{};
    dollar = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quartes = balance / quarter_value;
    balance = balance % quarter_value;

    dimes = balance / dime_value;
    balance = balance % dime_value;

    nickel = nickel / nickel_value;
    balance = balance % nickel_value;

    pennies = balance;

    cout <<"The change is:"<<endl;
    cout<<"Dollar:"<<dollar<<endl;
    cout<<"Quartes: "<<quartes<<endl;
    cout<<"Dime: "<<dimes<<endl;
    cout<<"Nickel: "<<nickel<<endl;
    cout<<"Pennies: "<<pennies<<endl;

    return 0;
}
