#include <iostream>

using namespace std;
const int N = 200010;

int n;
int q[N];


int main(){
    int T;
    cin >> T;

    for (int cases  = 1; cases <= T; cases ++){
        cin >> n;

        for (int i = 1; i <=  n;i ++) cin >> q[i];


        int res = 0, mx = 0;
        for (int i = 1; i <= n; i ++){
            if (q[i] > mx && (i == n || q[i] > q[i + 1])){
                res ++;
            }

            mx = max(q[i], mx);
        }

        printf("Case #%d: %d\n", cases, res);
    }    

    return 0;
}