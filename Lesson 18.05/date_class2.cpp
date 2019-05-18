#include <iostream>

using namespace std;

struct Day{
    int value;
    explicit Day(int new_value){
        value = new_value;
    }
};

struct Month{
    int value;
    explicit Month(int new_value){
        value = new_value;
    }
};

struct Year{
    int value;
    explicit Year(int new_value){
        value = new_value;
    }
};

struct Date{
    int day;
    int month;
    int year;

    Date(Day new_day, Month new_month, Year new_year){
        day = new_day.value;
        month = new_month.value;
        year = new_year.value;
    }
};
void PrintDate(const Date& d){
    cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
}

int main(){

    Date date1 = {Day(10),Month(11),Year(12)};
    Date date2 = {Day(11),Month(11),Year(18)};
    PrintDate(date1);
    PrintDate(date2);
    return 0;
}