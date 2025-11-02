#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e4;
int prime[N+9];
vector<int> seive()
{
	for(int i=2;i*i<=N;i++)
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
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==0)
            v.push_back(i);
	}
	return v;
}

void solve(){
    vector<int>v=seive();
    // cout<<v.size()<<endl;
   test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int f=0;
        for(auto x:v){
            for(int i=0;i<n;i++){
                if(__gcd(a[i],x)==1){
                    f=1;
                    cout<<x<<endl;
                    break;
                }
            }
            if(f) break;
        }
        // if()
   }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}