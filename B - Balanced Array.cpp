#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long p;
        cin>>p;
        if(p%2!=0)
            cout<<"NO"<<endl;
            else if(p==2)cout<<"NO"<<endl;
        else
        {
            vector<long long>vec;
            vector<long long>vec1;
            long long sum=0,sum1=0;
            for(int i=2;i<=p;i=i+2)
            {
                vec.push_back(i);
                sum=sum+i;
            }
            for(int i=1;i<p;i=i+2)
            {
                vec1.push_back(i);
                //sum1=sum1+i;
            }
            for(int i=0;i<vec1.size()-1;i++)sum1=sum1+vec1[i];
 
 
            //cout<<sum<< " "<<sum1<<endl;
            int result=sum-sum1;
            //cout<<result<<endl;
 
            if(result%2==0)
                cout<<"NO"<<endl;
 
                int s=vec1.size();
 
            if(result%2!=0 && result>vec1[s-1])
            {
                vec1.push_back(result);
                cout<<"YES"<<endl;
 
                for(int i=0;i<vec.size();i++)
                {
                    cout<<vec[i]<<" ";
                }
 
 
                 for(int i=0;i<vec1.size()-2;i++)
                {
                    cout<<vec1[i]<<" ";
                }
 
                cout<<result<<endl;
 
 
            }
 
        }
    }
    return 0;
}
