#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long int a[5];
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	long long int sum=(a[1]+a[2]+a[3]+a[4])/3;
	int fr=1;
	for(int i=1;i<5;++i){
		if(sum-a[i])
            {
			if(fr)
                {
                    fr=0;
                    cout<<sum-a[i];
            }
			else cout<<" "<<sum-a[i];
		}
	}
	return 0;
}
