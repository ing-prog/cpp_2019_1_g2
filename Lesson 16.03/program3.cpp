#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num;
    vector<string> names , fams;
    cout<<"Enter num of persons: ";
    cin >> num;

    for( int i =0; i < num; i++){
        string name, fam;
        cin>> name >> fam;

        names.push_back(name);
        fams.push_back(fam);
    }

    for (int j =0; j < names.size(); j++){
        cout << names[j]<<" "<<fams[j]<<endl;
    }
        



    return 0;
}