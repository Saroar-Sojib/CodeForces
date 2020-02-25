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
        string a, b, c;
        cin >> a >> b >> c;
        bool f = 1;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] == c[i] or b[i] == c[i]) {
 
            }
            else f = 0;
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}
