#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector <int> vector1{};
  vector <int> vector2{};

  vector1.push_back(10);
  vector1.push_back(20);

  cout << "First element in vector1 one: "<< vector1.at(0)<<endl;
  cout << "Second element in vector1 two: "<< vector1.at(1)<<endl;
  cout << "And the total number of elemnts is "<< vector1.size()<<endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout << "First element in vector2 : "<< vector2.at(0)<<endl;
  cout << "Second element in vector2 : "<< vector2.at(1)<<endl;
  cout << "And the total number of elemnts is "<< vector2.size()<<endl;

  vector <vector<int>> vector2d {
    {0},
    {0},
    {0},
    {0},
  };
  vector2d.push_back(vector1);
  vector2d.push_back(vector2);
  cout << vector2d.size() <<endl;


  return 0;
}

