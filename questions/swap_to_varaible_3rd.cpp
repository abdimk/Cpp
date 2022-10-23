// swap the content of two variables using a third variable

#include <iostream>

using namespace std;

int main()
{
    int x {10};
    int y {20};
    int z {};

    cout <<"X: "<< x <<" Y:"<< y <<" Z: "<< z <<endl;
    cout<<"---------------------------------------"<<endl;

    z = x;
    x = y;
    y = z;

    cout<<"---------------------------------------"<<endl;
    cout <<"X: "<< x <<" Y:"<< y <<" Z: "<< z <<endl;


}
