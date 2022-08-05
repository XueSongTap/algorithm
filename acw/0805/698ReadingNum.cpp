#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>


using namespace std;

string nums[] = {
    "zero", "one", "two", "three", "four", 
    "five", "six", "seven", "eight", "nine",
};

string cnts[] = {
    "", "", "double", "triple", "quadruple",
    "quintuple", "sextuple", "septuple", "octuple",
    "nonuple", "decuple"
};

void print(string s){
    for (int i = 0; i < s.size(); i ++){
        int j = i + 1;
        while (j < s.size() && s[j] == s[i]) j ++;

        int len =  j - i;

        if (len >= 2 && len <= 10) cout << cnts[len] << ' ' << nums[s[i] - '0'] << ' ';
        else if (len >  10){
            for (int k = 0; k < len; k ++){
                cout << nums[s[i] - '0'] << ' ';
            }
        }
        else cout << nums[s[i] - '0'] << ' ';
        i = j - 1;
    }

}

int main(){
    int T;
    cin >> T;

    for (int cases = 1; cases <= T; cases ++){
        string s,seq;
        cin >> s >> seq;

        vector<int> len;

        string str;
        stringstream  ssin(seq);
        while (getline(ssin, str, '-')){
            len.push_back(stoi(str));
        }

        printf("Case #%d:  ", cases);

        int start = 0;
    
        for (int l : len){
            print(s.substr(start, l));
            start += l;
        }

        puts("");


        
    }

    return 0;
}