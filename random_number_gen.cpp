#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random {};
    size_t count_{10};
    int min_{1};
    int max_{6};

    cout<<"RAND MAX in my system is "<<RAND_MAX<<endl;
    srand(time(nullptr)); // seeding the random number generator

    for(size_t i{}; i < count_; i++){
        random = rand() % max_ + min_;
        cout<< random<<endl;
    }
}
