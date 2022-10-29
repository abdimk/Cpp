#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num_items{};

    cout << "How many data items do you have:";
    cin >> num_items;

    vector <int> data {};

    for(int i{1}; i <= num_items; i++){
        int user_data {};
        cout << "Enter data "<<i<<" :";
        cin >> user_data;
        data.push_back(user_data);
    }
    cout <<"\nDisplaying histogram"<<endl;

    for(auto k : data){
        for(int j{1}; j <= k; j++){
            cout <<"-";
        }
        cout <<endl;
    }


}
