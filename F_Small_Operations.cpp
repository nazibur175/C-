#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> factorize(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}
void solve(){
    test{
        int x,y,k;
        cin>>x>>y>>k;
        vector<int>v=factorize(x);
        vector<int>vv=factorize(y);
        
        sort(v.begin(),v.end());
        sort(vv.begin(),vv.end());

        int i=0;
        int j=0;
        int n=v.size();
        int nn=vv.size();
        vector<int>t,tt;
        while(i<n || j<nn){
            if(i>=n){
                tt.push_back(vv[j]);
                j++;
            }
            else if(j>=nn){
                t.push_back(v[i]);
                i++;
            }
            else if(v[i]==vv[j]){
                i++;
                j++;
            }
            else if(v[i]<vv[j]){
                t.push_back(v[i]);
                i++;
            }
            else {
                tt.push_back(vv[j]);
                j++;
            }
        }
        sort(t.begin(),t.end());
        sort(tt.begin(),tt.end());
        int ans=0;
        int temp=1;
        int f=1;
        for(auto x:t){
            cout<<x<<" ";
            if(x>k){
                f=0;
                break;
            }
            temp*=x;
            if(temp>k){
                ans++;
                temp=x;
            }
        }
        cout<<endl;
        if(temp>1)ans++;
        temp=1;

        for(auto x:tt){
            cout<<x<<" ";
            if(x>k){
                f=0;
                break;
            }
            temp*=x;
            if(temp>k){
                ans++;
                temp=x;
            }
        }
        cout<<endl;
        if(temp>1)ans++;
        if(f==0) cout<<"-1"<<endl;
        else 
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}