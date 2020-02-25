#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,hh,mm,result,r1;
   cin>>t;
   while(t--)
   {
       cin>>hh>>mm;
       r1=(hh*60)+mm;
       result=1440-r1;
       cout<<result<<endl;
   }
   return 0;
}
