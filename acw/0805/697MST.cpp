#include <iostream>

using namespace std;


const int N = 110;
        int n;
string cards[N];

int main(){
    int T;
    cin >>T;

    for (int cases = 1; cases <= T; cases ++){

        cin >>  n;

        getchar();
        int res  = 0;
        for (int i =  0; i < n; i ++){
            getline(cin, cards[i]);
        }

        for (int i = 1; i <n; i ++){
            if (cards[i] < cards[i -1]){
                for (int j = i; j; j --){
                    if (cards[j] < cards[j -1 ]){
                        swap(cards[j], cards[j -1]);
                    }

                    
                }
                res ++;
            }
        }

        printf("Case #%d: %d\n", cases, res);
    }
}