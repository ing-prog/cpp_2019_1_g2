#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

struct Rational{
    int num_up;
    int num_down;
    Rational(int new_up, int new_down){
        num_up = ...
        num_down = ...
    }
};

"5/0"
int main(){

    stringstream rat_ss("5/6")
    Rational rat = ReadRational(rat_ss);
    PrintRational(cout,rat);
    return 0;
}