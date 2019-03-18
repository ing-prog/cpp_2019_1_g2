#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers = {1,2,3,4,9,500,-2,10};
    vector<int> empty_numbers;
    vector<int> fixed_size_lol_kek(10);

    cout<<numbers[0]<<endl;

    for(int i =0; i < numbers.size(); i++){
        cout<<numbers[i]<<endl;

    }
    for( auto x : fixed_size_lol_kek){
        cout<<x<<endl;
    }

    cout<<"Empty Numbers Part"<<endl;

    //cout<<empty_numbers[0]<<endl;


    cout<<"FIxed size Part"<<endl;
    cout<<fixed_size_lol_kek[0]<<endl;


    



    return 0;
}