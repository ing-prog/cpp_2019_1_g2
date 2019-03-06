#include <iostream>
#include <string>

using namespace std;

int main(){
    int age = 0 ;
    cout<<"Enter your age: "<<endl;
    cin >>age;
    cout<<"Your age is " <<age<<endl;
    if (age < 18) {
        cout<<"You can't enter in UNI"<<endl;
    } else if (age < 25){
        cout<<"Welcome to UNI"<<endl;
    }else{
        cout<<"You are too old."<<endl;
    }
    return 0;
}