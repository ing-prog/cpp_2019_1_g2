#include <iostream>
#include <string>

using namespace std;



bool IsPalindrom(string temp){

    for(int i =0; i < temp.size()/2; i++){
        if(temp[i] != temp[temp.size()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){

    string t;
    cin >> t;
    string dump;

    for(int i = 0; i < 2; i++){
        dump += t[i];
    }
    cout<<dump<<endl;
    if(IsPalindrom(t)){
        cout<<t<<endl;

    }else{
        cout<<"-1"<<endl;
    }
//HW


    return 0;
}