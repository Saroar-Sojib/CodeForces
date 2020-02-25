#include<bits/stdc++.h>
 
using namespace std;
 
#define sz(x) (int)(x).size()
#define pb push_back
#define x first
#define y second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
 
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pii>> vvpii;
typedef vector<vector<pll>> vvpll;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;
typedef unordered_set<pii> uspii;
typedef unordered_set<string> uss;
typedef queue<int> qi;
 
#define FOR(i, a, b) for (int i=a; i<(b); ++i)
#define F0R(i, a) for (int i=0; i<(a); ++i)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; --i)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; --i)
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int inf = 1e9;
const int MX = 1e5 + 1;
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    F0R(i, n) cin >> a[i];
    ll sm = 0;
    F0R(i, n) sm += a[i];
    int cnt = 0;
    F0R(i, n) cnt += (a[i] == 0);
    if (cnt + sm != 0)
        cout << cnt << "\n";
    else
        cout << cnt + 1 << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    F0R(k, t)
        solve();
 
    return 0;
}
