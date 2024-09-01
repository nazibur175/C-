#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L') pans+=i;
            else pans+=(n-i-1);
        }
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        
        //cout<<pans<<endl;
        int l=0;
        int r=n-1;
        //int k=1;
        vector<int>v;
        while (l<r)
        {
            if(s[l]=='L'){
                pans-=l;
                pans+=(n-l-1);
                v.push_back(pans);
            }
            if(s[r]=='R'){
                pans-=(n-r-1);
                pans+=r;
                v.push_back(pans);
            }
            l++;
            r--;
        }
        if(v.empty())v.push_back(pans);
        for(auto x:v) cout<<x<<" ";
        for(int i=v.size()+1;i<=n;i++){
            cout<<v.back()<<" ";
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