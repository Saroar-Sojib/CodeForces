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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int lo = 1e9, hi = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == -1) {
                if(i > 0 && v[i-1] != -1) lo = min(lo, v[i-1]), hi = max(hi, v[i-1]);
                if(i+1 < v.size() && v[i+1] != -1) lo = min(lo, v[i+1]), hi = max(hi, v[i+1]);
            }
        }
        if(hi < lo) lo = hi;
        int ans = (hi-lo+1)/2;
        for(int i = 1; i < n; i++) {
            if(v[i] == -1 or v[i-1] == -1) continue;
            ans = max(ans, abs(v[i-1]-v[i]));
        }
        cout << ans << " " << (hi+lo)/2 << endl;
    }
 
    return 0;
}
