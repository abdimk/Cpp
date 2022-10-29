#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char options{};
    vector <int> numbers {};

    do{
        cout <<"<<-------------<<"<<endl;
        cout <<"P- Print numbers"<<endl;
        cout <<"A- Add a numbers"<<endl;
        cout <<"M- Display the mean of the numbers"<<endl;
        cout <<"S- Display the smallest number"<<endl;
        cout <<"L- Display the largest number"<<endl;
        cout <<"Q- Quit"<<endl;
        cout <<"<<-------------<<"<<endl;

        cout <<"Enter your choice:";
        cin >> options;

        if (options == 'P' || options == 'p'){
                if(numbers.size() > 0){
                   //cout <<"do the for loop;"<<endl;
                   cout<<"[";
                   for(auto i : numbers){
                    cout <<i;
                    cout<<" ";
                   }
                   cout <<"]";
                   cout <<"\n\n";

                }else
                    cout <<"[]\n\n"<<endl;

        }
        else if (options == 'A' || options == 'a'){
            cout <<"Add a number to the list :";
            int user_add {};
            cin >>  user_add;
            numbers.push_back(user_add);
            cout << "you have added number: "<<user_add<<endl;
            cout <<"\n";
        }
        else if (options == 'M' || options=='m'){
            if(numbers.size() > 0){
                double total_item{};
                double average_item{};
                for(auto i : numbers){
                    total_item += i;
                }
                average_item = total_item / numbers.size();

                cout << "The mean item or the average of the data is:"<<average_item<<endl;
                cout <<"\n";
            }
            else
                cout <<"Unable to calculate the mean"<<endl;
                cout <<"\n";
        }
        else if (options =='S' || options ==  's'){
            if(numbers.size() > 0){
                int smallest {numbers.at(0)};
                for(auto i : numbers){
                    if(i < smallest){
                        smallest = i;
                    }
                }
                cout<<smallest<<endl;

            }
            else
                cout<<"Unable to calculate the smallest number"<<endl;
                cout<<"\n";

        }
        else if (options == 'L' || options =='l'){
                if(numbers.size() > 0){
                    int larger {};
                    for(auto i : numbers){
                        if( i > larger)
                            larger = i;
                    }
                    cout<<larger<<endl;
                }
                else
                    cout<<"Unable to calculate the largest numbers"<<endl;

        }
        else if(options =='Q' || options == 'q'){
            cout <<"program terminated ! [>_<]"<<endl;
        }
        else{
            cout<<"Unknown selection please try again ! \n\n"<<endl;
        }

    }while(options!='Q' && options!='q');


}
