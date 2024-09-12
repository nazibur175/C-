#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N= 1e7;
int prime[N];
vector<int> sieve ()
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
    vector<int>v;
    v.push_back(2);
	for(int i=3;i<=N;i+=2)
	{
		if(prime[i]==0)
            v.push_back(i);
	}
	return v;
}

void solve(){
    vector<int>v= sieve();
    //cout<<v.size()<<endl;
     int n;
     cin>>n;
     cout<<v[n-1]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}