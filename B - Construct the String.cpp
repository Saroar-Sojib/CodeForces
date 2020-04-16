#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n, a, b;
    cin >> n >> a >> b;
    string s(a, ' ');
    for (int i = 0; i < a; i++) s[i] = (char) ('a' + i % b);
    for (int i = 0; i < n; i++) cout << s[i % a];
    cout << '\n';
    }
 
 
 
    return 0;
}
