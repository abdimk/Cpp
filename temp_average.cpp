#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int scores[] {10,20,30,40};


   // for (auto score: scores)
     //   cout <<score<<endl;

    vector <double> tempratures {87.9, 77.9, 80.0,72.5};

    double total{};
    double mean{};

    for (auto temp: tempratures)
            total +=temp;

    if(tempratures.size() != 0)
        mean = total/tempratures.size();

    cout<<fixed<<setprecision(1)<<endl;
    cout <<"The mean is: "<<mean<<endl;
}







