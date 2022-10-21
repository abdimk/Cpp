#include <iostream>

using namespace std;

int main()
{
    char letter_grade {};

    cout << "Enter the grade you expect to the exam: ";
    cin >> letter_grade;


    switch(letter_grade){
        case 'a':cout<<"you need to score more than 90"<<endl;break;
        case 'b':cout<<"you need to score more than 80"<<endl;break;
        case 'c':cout<<"you need to score more than 70"<<endl;break;
        case 'd':cout<<"you need to score more than 60"<<endl;break;
        case 'f':cout<<"you need to score less than 50"<<endl;break;
        default:cout << "you need to enter valid letter"<<endl;
    }
}
