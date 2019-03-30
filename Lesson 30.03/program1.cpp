#include <iostream>

using namespace std;
int SumInSquared(int a, int b);

int SumInSquared(int a, int b){
    int sum = a+b;
    return sum*sum;
}


void PrintSomething(int a, double b){
    cout<<a<<" And second is : "<<b<<endl;
}

int ChangeNumber(int& x){
    x = 25;
    return x;
}

bool Squarer(double h, double R){
    double Vr = 4/3*(3.1415)*R*R*R;
    double Vh = h*h*h;

    if( Vr - Vh >= 0 ){
        return true;
    }else{
        return false;
    }
}


int Factor(int n){
    if(n < 2){
        return 1;

    }else{
        return Factor(n-1)*n;
    }
}

int main()
{
    int n = 52;
   

    return 0;
}