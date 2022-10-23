//find the area of a circle  where the radius is provided by the user.

#include <iostream>



using namespace std;

int main()
{
    int radius{};
    const double pie{3.14};

    cout<<"Enter the radius provided by the user:";
    cin >> radius;

    double area{};
    area = static_cast <double> (radius*radius) * (pie);

    cout<<"The area of the circle with radius "<<(radius)<<" is :"<< area<<endl;
    
    return 0;


}
