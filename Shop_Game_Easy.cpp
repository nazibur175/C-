#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        deque<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        deque<pair<int,int>>dq;
        int ans=0;
        string s;
        cin>>s;
        for(int i=0;i<k;i++){
            while(dq.size()<2 && v.size()>0){
                dq.push_back(v.back());
                v.pop_back();
            }
            if(dq.size()<2) break;
            int mn=0;
            int mx=0;
            if(dq.front().second < dq.back().second){
                mn=dq.front().first;
                mx=dq.back().first;
                if(s[i]=='0'){
                    ans+=mn;
                    ans%=mod;
                    dq.pop_front();
                }
                else{
                    ans+=mx;
                    ans%=mod;
                    dq.pop_back();
                }
            }
            else{
                mn=dq.back().first;
                mx=dq.front().first;
                if(s[i]=='0'){
                    ans+=mn;
                    ans%=mod;
                    dq.pop_back();
                }
                else{
                    ans+=mx;
                    ans%=mod;
                    dq.pop_front();
                }
            }
            
        }
        cout<<ans%mod<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}