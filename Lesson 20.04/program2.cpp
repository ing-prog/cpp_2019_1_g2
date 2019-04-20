#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


template<class T>
void Print(const T& v){
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;

}

template<class N, class A, class B, class C>
float MassCalculate(N n, A a, B b, C c){
    return 5000*n*a*b*c;
}


int main(){
    vector<int> vec = {1,2,3,4,5};
    set<int> s = {1,2,3,4,5};

    cout<<"Vector Output: "<<endl;
    Print(vec);
    cout<<"Set Output: "<<endl;
    Print(s);

    map<string, int> ager = {{"Maria", 25}, {"Peter", 17},{"Matthew", 43}};

    for(auto k : ager){

        cout<<k.first<<" "<<k.second<<endl;

    }

    cout<<"Mass Calculator Results: "<<MassCalculate(10, 1,1, 3.912356543)<<endl;

    return 0;
}