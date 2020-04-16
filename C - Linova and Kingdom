#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5 + 7;
 
int n, k, d[N], sm[N];
vector<int> G[N];
 
vector< pair<int, int> > vec;
 
void dfs(int v, int f = 0)
{
    for( auto u: G[v])
    {
        if(u == f) continue;
        d[u] = d[v] + 1;
        dfs(u, v);
        sm[v] += sm[u];
    }
    vec.push_back({d[v] - sm[v], v});
    sm[v]++;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n >> k;
    for(int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
 
    dfs(1);
 
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
 
    long long ans = 0;
    for(int i = 0; i < k; i++)
        ans += vec[i].first;
 
    cout << ans << "\n";
 
    return 0;
}

