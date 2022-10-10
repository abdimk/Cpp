#include <iostream>
#include <climits>

// on linux compile it your self like main.cpp for running use ./a.out


using namespace std;

int main(){
  cout << "Number of small rooms:";
  int number_of_small_rooms;
  cin >> number_of_small_rooms;

  cout << "Number of large rooms:";
  int number_large_rooms;
  cin >> number_large_rooms;

  const int price_per_small_room {25};
  const int price_per_large_room {35};
  const double sales_tax_rate {0.06};

  int cost_for_large_room {number_large_rooms*price_per_large_room};
  int cost_for_small_room {number_of_small_rooms * price_per_small_room};
  double estimated_tax {(cost_for_large_room + cost_for_small_room)*sales_tax_rate};

  cout << "========================================"<<endl;
  cout << "Estimate for carpate clearning services"<<endl;
  cout << "Number of small rooms: "<< number_of_small_rooms<<endl;
  cout << "Number of large rooms: "<< number_large_rooms<<endl;
  cout << "price per small room: $"<< price_per_small_room<<endl;
  cout << "price per large room: $"<< price_per_large_room<<endl;
  cout << "Cost: $"<<cost_for_large_room + cost_for_small_room<<endl;
  cout << "Tax: $"<<estimated_tax<<endl;
  cout << "========================================"<<endl;
  cout << "Total estimate: "<<(cost_for_large_room+cost_for_small_room+estimated_tax)<<endl;
  cout <<"This estimate if valid for "<<30<<"days"<<endl;


  return 0;
}

