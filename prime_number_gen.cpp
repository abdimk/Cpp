#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int compute(int num){
    if(num<=0)
        cout<<num<<" is not a prime number"<<endl;
    vector <int> factors{};

    for(int i{2}; i<num;i++){
        if(num % i ==0)
            factors.push_back(i);
    }
    if(factors.size()==0)
       return num;
    else
        return 0;
}

void prime_genrate(int start, int ending){
    vector <int> primes{};
    for(int i{start}; i <= ending; i++){
        if(compute(i)!=0 && compute(i)!=1)
            primes.push_back(i);
    }
    for(auto prime: primes)
        cout<<prime<<" ";
}

int main(){
    prime_genrate(1, 100);

}


