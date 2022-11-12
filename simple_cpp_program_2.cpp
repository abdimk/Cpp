#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;




void colors() {
  printf("\033[32m red text\n");
  printf("\033[33;44myellow on blue\n");
  printf("\033[0mdefault colors\n");
}

void convert_lower(string &s){
    for(int i{0}; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    string options{};
    vector <int> numbers{};

    //string message{"Enter the data:"};
    do{
        //colors();
        //printf(" red text\n");
        cout<<"\n\033[32m[Enter your options]:";
        cin>> options;
        convert_lower(options);

        if(options=="add"){
            if(numbers.size() < 5){
                int user_data{};
                cout <<"\n[Enter 5 numbers]:";
                cin >>user_data;
                if(user_data > 0 && user_data < 100)
                    numbers.push_back(user_data);
                else
                cout<<"\n[You'r input should be between 0 - 100 but yours is: "<<user_data<<"]"<<endl;
            }
            else
                cout<<"\n[ You can't add numbers more than 3]"<<endl;

        }else if(options=="show"){
            if(numbers.size()>0){
                    cout<<"\n\n[";
                    for(auto i: numbers){
                        cout<<i;
                        cout<<" ";
                        }
                    cout<<"]";

                    cout<<"\n\n\n";
            }
            else
                cout<<"[ ]"<<endl;


        }else if(options=="cmp"){
            if(numbers.size() < 0)
            cout<<"\n [ There are no numbers in the vector]"<<endl;
            else{
                int j{};
                cout<<"\n";
                for(auto i: numbers){
                    if(i > 50){
                        j+=1;
                        cout<<i;
                        cout<<" ";
                    }
                }
                cout<<" are larger than 50";
                cout<<endl;
                cout<<"\n";
                cout<<"out of "<< numbers.size() <<","<<j<<" of them are grater than 50";
            }
        }else if(options=="quit"){
            cout<<"program terminated!";
        }

    }while(options!="quit"&&options!="Q");
}
