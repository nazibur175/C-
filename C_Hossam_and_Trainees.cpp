#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>v;
const int N=5e4;
int prime[N+3];
void sieve()
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
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==0)  v.push_back(i);
	}
}
map<int,int>m;
void factor(int x){
    for(auto val:v){
        if(x%val==0)m[val]++;
        while (x%val==0)
        {
            x/=val;
        }
        if(val*val>x)break;
    }
    if(x!=1)m[x]++;
}

void solve(){
    sieve();
    test{
        int n;
        cin>>n;
        int a[n];
        int evencnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) evencnt++;
        }
        if(evencnt>=2) {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            factor(a[i]);
        }
        int f=0;
        for(auto val:m){
            if(val.second>=2){
                f=1;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        m.clear();
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}