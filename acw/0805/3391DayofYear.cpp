#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


const int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap(int year){
    if (year % 100 && year % 4 == 0 || year % 400 == 0){
        return 1;
    }
    return 0;
}

int get_days(int year, int month){
    int res = months[month];

    if(month == 2){
        res +=is_leap(year);
    }

    return res;
}
int main(){
    int year, month, day;
    while (cin >> year >> month >> day){
        int res = 0;
        for (int i = 1; i < month; i ++){
            res += get_days(year, i);
        }

        res += day;
        cout << res << endl;
    }

    return 0;
}