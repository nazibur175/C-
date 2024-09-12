#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const int N=1e8;
bool prime[N+1];
void seive()
{

	for(int i=3;i*i<=N;i+=2)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
			{
				prime[j]=1;
			}
		}
	}
    cout<<2<<endl;
    int cnt = 1;
	for(int i=3;i<=N;i+=2)
	{
		if(prime[i]==0){
            cnt++;
            if(cnt%100==1)cout<<i<<'\n';
        }
	}

}


void solve(){
seive();
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}