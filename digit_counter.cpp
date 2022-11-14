#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector <int> numbers {};

void print_each_digit(int x)
{
    if(x >= 10)
       print_each_digit(x / 10);

    int digit = x % 10;


    numbers.push_back(digit);


}
int main(){
    int mydigit{2392093};
    int counter{};
    print_each_digit(mydigit);
    for(auto x : numbers){
        counter+=1;
    }
    cout<<mydigit<<" has "<<counter<<" digits"<<endl;
}
