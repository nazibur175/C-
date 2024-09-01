#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
    string s;
    cin>>s;
    s="00"+s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		for(int k=j+1;k<n;k++)
    		{
    			int cur=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
    			if(!(cur%8))
    			{
    				cout<<"YES"<<endl;
    				cout<<cur;
    				return 0;
    			}
    		}
    	}
    }
    cout<<"NO";
    return 0;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}