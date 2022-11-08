#include <iostream>
#include <string>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate) + shipping;
}


int main(){
    double cost {0};
    cost = calc_cost(100.0, 0.06);
    cout <<cost<<endl;
    return 0;

}
