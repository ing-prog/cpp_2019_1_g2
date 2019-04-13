#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Auto{
    string Mark;
    int Hp;
    int N_passangers;
    string Color;
    int Vol;

};

bool operator <(const Auto& car1, const Auto& car2){
    bool answer = (car1.Vol < car2.Vol);
    return answer;

}

Auto operator +(const Auto& car1, const Auto& car2){
    Auto temp;
    temp.Color = car1.Color + car2.Color;
    temp.Hp = car1.Hp + car2.Hp;
    temp.Mark = car1.Mark + car2.Mark;
    temp.N_passangers = car1.N_passangers + car2.N_passangers;
    temp.Vol = car1.Vol + car2.Vol;

    return temp;
}

int main(){
    int a = 2;
    Auto car1 = {"Kia", 560, 4,"Green", 5};
    Auto car2 = {"BMW", 300, 1, "Black", 400};
    
    vector<Auto> park = {car1, car2};

    park.push_back({"Toyota", 1200, 10, "Rainbow", 100});
    Auto car3 = (car1 + car2);
    park.push_back(car3);

    for (int i =0; i < park.size(); i++){
        cout<<"This info about car "<< i+1<<endl;
        cout<<park[i].Mark<<" "<<park[i].Hp<<endl;
    }

    cout<<(car2 < car1)<<endl;

    


    

    


    return 0;
}