#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;

    for (int cases = 1; cases <= T; cases ++){
        
        int n, x, y;
        cin >> n >> x >> y;

        printf("Case #%d: ", cases);
        int sum = n *(n + 1)/2;

        if (sum % (x + y)) puts("IMPOSSIBLE");
        else{
            puts("POSSIBLE");
            vector<int> q;
            int a = sum / (x +  y) * x;

            for (int i = n; i; i --){
                if (a >= i){
                    q.push_back(i);
                    a -=  i;
                }
            }
        
            printf("%d\n", q.size());
            for (auto x : q){
                printf("%d ", x);
            }

            puts("");
        }

 

        
    }
           return 0;
}