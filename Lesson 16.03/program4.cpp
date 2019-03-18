#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    vector<string> num = {"Jack", "BOb","Alice", "Petr","", "3"};
    sort(num.begin(), num.end());
    for(auto x : num){
        cout<< x<<" ";
    }
    cout <<endl;


    return 0;
}