#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
    cin >> n;
    vector<int> cnt(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      --x;
      ++cnt[x];
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    int cc = 0;
    for (int i = 0; i < n; i++) {
      cc += !!cnt[i];
    }
    cout << min(mx, cc) - (mx == cc) << '\n';
  }
 
 
    return 0;
}
