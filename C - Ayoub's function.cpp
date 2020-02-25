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
        int n, m;
        cin >> n >> m;
        int r = n-m;
        int each = r/(m+1);
        int b = r%(m+1);
        int a = (m+1)-b;
        long long bad = 1ll*each*(each+1)*a/2 + 1ll*(each+1)*(each+2)*b/2;
        long long ans = 1ll*n*(n+1)/2 - bad;
        cout << ans << endl;
    }
 
    return 0;
}
