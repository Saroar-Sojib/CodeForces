#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>vec;
    vector<long long>so;
    long long t;
    cin>>t;
    long long c=t*2;
    while(c--)
    {
        long long a,b;
        cin>>a>>b;
        vec.push_back(a);
        so.push_back(b);
    }
    long long po=0,mo=0;
    for(int i=0;i<vec.size();i++)
    {
        po+=vec[i];
        mo+=so[i];
    }
    cout<<po/t<<" "<<mo/t<<endl;
 
return 0;
 
 
 
}
