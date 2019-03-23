#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    string name = "Jack";
    char ch = '!';
    char ch2 = '?';

    cout<<name<<endl;
    cout<<"This is my char: "<<ch<<endl;

    string name2 = "LolKek";

    cout << name + name2<<endl;
    cout << ch + ch2<<endl;



    string temp = "I_am_batman______Y____ou__r_are_not";
    char check = '_';
    int checker = 0;

    for (int i =0 ; i < temp.size();i++){
        if(temp[i] == check){
            checker++;
        }
    }

    cout<<"\n\n This is the answer: "<<checker<<endl;

    cout<<count(temp.begin(), temp.end(), '_')<<endl;

    ///////////////////////////////////

    //string info;
    //int age;

    //cin >> info>>age;;

    //cout<<info<<" and Your age is: "<<age<<endl;

    string str1 = "aaaaaa";
    string str2 = "shfjldsjfjjalfj";
    string str3 = "berrqwasd";

    if(str1 <= str2 && str1<= str3){
        cout<<"This is minimal string: "<<str1<<endl;
    }

    //HW
   string num = "500";
   int num2 = num;
    


    return 0;
}