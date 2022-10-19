// determine weather you need to wear a coat based on temprature and wind speed

#include <iostream>

using namespace std;

int main(){
    bool wear_coat{false};
    double temprature{};
    int wind_speed{};

    cout << boolalpha;
    const int wind_speed_for_coat{25}; //wind over this value requires a coat.
    const int temprature_for_coat{45}; //temprature below this requires a coat.

    //Requires a coat if either temprature is too high or temprature is too low

    cout <<"Enter the current tempratre in (F):";
    cin >> temprature;

    cout << "\nEnter the wind speed in (mph):";
    cin >> wind_speed;

    wear_coat = (wind_speed > wind_speed_for_coat || temprature < temprature_for_coat);


    cout <<"wear coat: "<<wear_coat<<endl;





}
