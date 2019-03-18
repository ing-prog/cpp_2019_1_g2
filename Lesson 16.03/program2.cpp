#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<string> names = {"Jack", "BOb","Alice", "Petr"};
    for (auto item : names){
        cout<<item<<endl;
    }

    for (int i = names.size()-1; i>= 0; i--){
        cout<<names[i]<<endl;
    }


    return 0;
}