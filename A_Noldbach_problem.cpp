#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e4;
int prime[2*N];
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
	for(int i=2;i<=1000;i++)
	{
		if(prime[i]==0)
            v.push_back(i);
	}
	return v;
}

void solve(){
 vector<int>v = seive();
 vector<int>vv;
 for(int i=0;i<v.size()-1;i++){
        int sum=v[i]+v[i+1]+1;
        if(prime[sum]==0){
            vv.push_back(sum);
        }
 }
 //for(auto x:vv) cout<<x<<endl;
  int n,k;
  cin>>n>>k;
  int possible = upper_bound(vv.begin(),vv.end(),n)-vv.begin();
  //cout<<possible<<endl;
  if(possible>=k) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}