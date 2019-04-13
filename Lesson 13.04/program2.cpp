#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main(){

    set<string> names = {"Nika","Petya","Kek","Kek"};
    //cout<< count(names.begin(), names.end(), "Kek")<<endl;
    names.insert("Alex");
    for(auto i : names){
        cout<< i << endl;
    }


    return 0;
}