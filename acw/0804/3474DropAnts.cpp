#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

#define x first
#define y second
using namespace std;
typedef pair<int, int> PII;

int main(){
    int n;
    cin >> n;
    vector<PII> q;

    int A;

    for (int i = 0; i < n; i ++){
        int x, y;
        cin >> x >> y;
        if (!y) A = x;
        q.push_back({x, y});
    }

    sort(q.begin(), q.end());

    vector<int> l, r;
    for (auto &p: q){
        if (!p.y || p.x  < A && p.y < 0 || p.x > A && p.y > 0){
            continue;
        }
        if (p.x < A) l.push_back(p.x);
        else r.push_back(p.x);
    }

    if (l.size() == r.size()) cout << "Cannot fall!" << endl;
    else if(l.size() < r.size()) cout << r[l.size()] << endl;
    else cout << 100 - l[l.size() - 1 - r.size()] << endl;

    return 0;
}