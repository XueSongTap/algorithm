#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 40;
int n, m;
int a[N][N];
bool st[N];

bool check_row(){
    for (int i = 0; i < m; i ++){
        memset(st, 0, sizeof st);

        for (int j = 0; j < m; j ++){
            int t = a[i][j];

            if (t < 1 || t > m) return false;
            if (st[t]) return false;
            st[t] = true;
        }
    }
    return true;
}


bool check_col(){
    for (int i = 0; i < m; i ++){
        memset(st, 0, sizeof st);
        for (int j = 0; j < m; j ++){
            int t = a[j][i];
            if (t < 1 || t > m) return false;
            if (st[t]) return false;
            st[t] = true;
        }
    }

    return true;
}

bool check_cell(){
    for (int x = 0; x < m; x += n){
        for (int y = 0; y < m; y  += n){
            memset(st, 0, sizeof st);
            for (int dx = 0; dx < n; dx ++){
                for (int dy = 0; dy < n; dy ++){
                    int t = a[x + dx][y + dy];
                    if (t < 1 || t > m) return false;
                    if (st[t]) return false;
                    st[t] = true;
                }
            }
        }
    }

    return true;
}   

int main(){
    int T;

    cin >> T;

    for (int c = 1; c <= T; c ++){
        cin >> n;
        m = n * n;
        for (int i = 0; i < m; i ++){
            for (int j = 0; j < m; j ++){
                cin >> a[i][j];
            }
        }
        if (check_row() && check_col() && check_cell()) printf("Case #%d: Yes\n", c);
        else printf("Case #%d: No\n", c);
    }
    return 0;


}   