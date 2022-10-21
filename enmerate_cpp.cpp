#include <iostream>

using namespace std;


int main()
{
    enum Directions{right,left,up,down};
    Directions heading{down};

    switch(heading){
        case right:cout << "your heading right";
            break;
        case left:
                {
                    cout << "are you sure you want to go left(yes/no)?:";
                    string user_value {};
                    cin >> user_value;
                    if(user_value == "yes" || user_value =="YES")
                        cout << "ok what ever go left then"<<endl;
                    else
                        cout << "then you can return back dude!"<<endl;
                }
                break;
        case up:
                cout << "remember your going up dude!"<<endl;
        case down:
                cout <<"so you have choosen death!"<<endl;
    }
    return 0;
}
