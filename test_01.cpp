//prototypes  in cpp

#include <iostream>
#include <string>

using namespace std;


double calculate_BMI(double weight, double height);
int user(int age, std::string name);


int main(){
    user(19,"abdisa");
    cout << calculate_BMI(49, 1.75)<<endl;
    return 0;

}


int user(int age, std::string name){
    std::string result {"my name is " + name + " and am " + std::to_string(age) + " years old."};
    cout << result <<endl;
}
double calculate_BMI(double weight, double height){
    return {weight /height};

}
