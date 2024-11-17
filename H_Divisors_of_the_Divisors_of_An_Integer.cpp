#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             10000007
#define test int t; cin>>t; while(t--)
const int N=1e6+9;
int prime[N+9];
vector<int>primes;
void seive()
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
    //vector<int>v;
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==0)
            primes.push_back(i);
	}
	
}

void solve(){
    seive();
    int n;
    while (cin>>n && n>0)
    {
        int ans=1;
        for(auto x:primes)
        {
            if(x>n)break;
            int cnt=0;
            int temp=x;
            while(temp<=n)
            {
                cnt+=(n/temp);
                //cnt%=mod;
                temp*=x;
                //temp%=mod;
            }
            cnt++;
            int sum = (cnt*(cnt+1))/2;
            sum%=mod;
            ans = (ans*sum)%mod;
        }
        cout<<ans<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}