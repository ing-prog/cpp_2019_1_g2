#include <iostream>
#include <set>
#include<map>
#include <string>
#include <utility>


using namespace std;


int factor(const int& n){
    if(n < 2){
        return 1;
    }else{
        return factor(n-1)*n;
    }
}


int main(){

    set<int> a = {1,50,2,4,-20,3};
    set<int> b = {100,200,300,400,500,-1000};
    cout << (a < b)<<endl;

    map<int, string> num2word = {{10, ""}, {2, "two"}, {3, "three"}, {4, "cat"}};
    map<string, set<int>> combo = {{"first", a}, {"second", b}};

    map<int, int> ultra;

    for(int i = 1; i < 51; i++){
        ultra.insert({i, factor(i)});
    }



    for(auto item : ultra){
        cout<<item.first << " "<<item.second<<endl;
    }

    cout<<factor(10)<<endl;



    return 0;
}