#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6 + 100;
 
int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        set<int> s;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        if(s.size() > k) {
            cout << "-1" << endl;
        }
        else {
            for(int i = 1; i <= n; i++) {
                if(s.size() == k) break;
                s.insert(i);
            }
            cout << n * k << endl;
            for(int i = 0; i < n; i++) {
                for(int x : s) {
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }
 
    return 0;
}
