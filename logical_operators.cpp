// determine weather  an inpuet is between to bounds

#include <iostream>

using namespace std;

int main(){
    int num{};
    const int lower_bound{10};
    const int upper_bound{20};
    bool with_in{false};
    cout << boolalpha;

    cout << "Inpute a number between "<<lower_bound<<" and "<<upper_bound<<":";
    cin >> num;
    
    with_in = (num > lower_bound && num < upper_bound);
    cout << num <<" is between "<< lower_bound<<" and "<< upper_bound<<endl;

    return 0;
}