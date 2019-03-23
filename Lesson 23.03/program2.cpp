#include <iostream>

using namespace std;

double Something(double a, double b);


int main(){
    double a,b;
    cin >> a>>b;
    double var = Something(a,b);
    cout<<var<<endl;

    return 0;
}

double Something(double a, double b){
    double result = (a+b)/(a-b)*(a/b);
    cout<<"Func Something() is working!"<<endl;
    return result;
}


