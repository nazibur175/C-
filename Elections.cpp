#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int>v;
        int cnt=0;
        int aa[n];
        int bb[n];
        for(int i=0;i<n;i++)cin>>aa[i];
        for(int i=0;i<n;i++)cin>>bb[i];
        for(int i=0;i<n;i++){
            int a = aa[i];
            int b = bb[i];
            if(a>b) cnt++;
            else{
                int lagbe = (b-a)+1;
                v.push_back(lagbe);
            }
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            if(x>=v[i]){
                x-=v[i];
                cnt++;
            }
        }
        //cout<<cnt<<endl;
        int half = (n+1)/2;
        if(cnt>=half)cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}