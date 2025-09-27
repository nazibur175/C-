#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
		cin>>n;
		vector<pair<int,int>> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i].first;
			v[i].second=i;
		}
		sort(v.rbegin(), v.rend());
		vector<int> ans(n);
		int last=-1;
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			ans[v[i].second]=last;
			sum+=(2*v[i].first*abs(last));
			if(last>0)
				last=-(last+1);
			else
				last=-last;
		}
		cout<<sum<<endl;
		cout<<0<<' ';
		for(int &x:ans){
			cout<<x<<' ';
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