#include <iostream>

using namespace std;


template <class T>
T Sqr(T num){
    return num*num;
}

template <class T, class U>
float Multiply(T a, U b){
    return a*b;
}

int main(){

    cout<<Sqr(2)<<endl;
    cout<<Sqr(10)<<endl;

    cout<<Sqr(4.5)<<endl;

    cout<<Multiply(2,2.1)<<endl;


    return 0;
}