#include <iostream>

using namespace std;

int main(){

    string str;

    while (cin >> str){
        if (str.back() == '.')str.pop_back();
        cout << str.size() << ' ';
    }

    return 0;
}