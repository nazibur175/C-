#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
map<char,vector<int>>v;
int dp[1000000+9];
string t;
int cal(int pos){
    if(dp[pos]!=-1) return dp[pos];
    int temp=INT64_MAX;
    for(int i=0;i<k;i++){
        char ch='a'+i;
        int index=lower_bound(v[ch].begin(),v[ch].end(),pos)-v[ch].begin();
        if(index==v[ch].size()){
            return dp[pos]=1;
        }
        else{
            int index1=v[ch][index];
            temp=min(temp,cal(index1+1)+1);
        }
    }
    return dp[pos]=temp;
}
void solve(){
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    string s;
    cin>>s;
    s='0'+s;
    for(int i=1;i<=n;i++){
        v[s[i]].push_back(i);
    }
    int q;
    cin>>q;

    while(q--){
        //dp.clear();
        cin>>t;
        t='0'+t;
        int sz=t.size();
        int ans=-1;
        int in=1;
        for(int i=1;i<sz;i++){
            char ch=t[i];
            int index=lower_bound(v[ch].begin(),v[ch].end(),in)-v[ch].begin();
            if(index==v[ch].size()){
                ans=0;
                break;
            }
            else{
                //cout<<index<<endl;
                //cout<<v[ch][index]<<endl;
                in=v[ch][index]+1;
                
            }
        }
        if(ans==0){
            cout<<0<<endl;
            //cout<<"HERE"<<endl;
            continue;
        }
        //cout<<in<<endl;
        ans= cal(in);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}