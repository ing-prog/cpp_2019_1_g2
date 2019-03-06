#include <iostream>
#include <string>

using namespace std;

int main(){

    int n = 0;

    while (n < 20){
        cout<<n<<endl;
        ++n;
    
    }
    cout<<"=====DO WHILE PART ======"<<endl;
    do{
        cout<<n<<endl;;
        n--;

    }while(n > 0);

    return 0;


}