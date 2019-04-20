#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

template< class Q>
auto MeanOfEver(Q q){
    auto total = 0.0;
    for(auto x : q){
        total += x;
    }
    total = total/q.size();
    return total;
}


int main(){

    vector<int> list1 = {1,2,3,4,5,6};
    vector<float> list2 = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5};
    set<int> list3 = {1,2,3,4,5};
    set<float> list4 = {1.5,2.5,3.5,4.5,5.5};

    cout<< MeanOfEver(list1)<<endl;
    cout<< MeanOfEver(list2)<<endl;
    cout<< MeanOfEver(list3)<<endl;
    cout<< MeanOfEver(list4)<<endl;




    return 0;
}