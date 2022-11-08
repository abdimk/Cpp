// fucntion overlod ,simple abstraction example

#include <iostream>
#include <string>


using namespace std;


void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){
    for(size_t i{0}; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void set_array(int arr[], size_t size, int value){ //const if you want the array to be constant
    for(size_t i{0}; i < size; i++)
        arr[i] = value;
}

int main(){
    int numbers []{1,2,3,4,5,6};
    print_array(numbers, 6);
    set_array(numbers, 6, 100);
    print_array(numbers, 6);
}






