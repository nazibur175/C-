#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>v;
const int N=1e6;
int prime[N+3];
void sieve()
{
    int n=N;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0) v.push_back(i);
	}
}

void solve(){
    sieve();
    test{
        int n;
        cin>>n;
        if(n%2==1) cout<<1<<" ";
        for(int i=0;i<n/2;i++){
            cout<<v[i]<<" "<<v[i]<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}