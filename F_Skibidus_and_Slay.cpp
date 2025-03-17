#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> primefactor(int n){
    vector<int> v;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        v.push_back(n);
    }
    return v;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        int prime[n+1]={0};
        int same[n+1]={0};
        int diff[n+1]={0};
        int cnt[n+1]={0};
        int totalprime=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            vector<int>v=primefactor(a[i]);
            if(v.size()>2) continue;
            else if(v.size()==1){
                totalprime++; 
                prime[a[i]]++;
                ans+=totalprime-prime[a[i]] + same[a[i]] + diff[a[i]];
            }
            else if(v[0]==v[1]){
                same[v[0]]++;
                ans+= prime[v[0]] + same[v[0]] ;
            }
            else {
                diff[v[0]]++;
                diff[v[1]]++;
                cnt[a[i]]++;
                ans+=prime[v[0]]+prime[v[1]] + cnt[a[i]];
            }
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