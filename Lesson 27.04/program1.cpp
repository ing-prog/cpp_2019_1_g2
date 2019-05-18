#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

vector<double> SpaceVelocity(const vector<double>& h){
    double R  = 6400000;
    double g = 9.81;
    vector<double> v;
    for(auto item : h){
        v.push_back(sqrt(g*(R+item)));
    }
    return v;
}

int main(){

    vector<double> h ={0, 100, 500, 1000, 5000, 6000, 7000, 10000, 20000,30000, 50000, 100000, 250000, 500000};
    vector<double> v_total = SpaceVelocity(h);

    for (auto i : v_total){
        cout<< i<<" ";
    }
    cout<<endl;

    
    



    return 0;
}