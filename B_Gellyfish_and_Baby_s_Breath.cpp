#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
const int N = 1e5+5;
int po[N+1];
void precompute() {
    po[0] = 1;
    for (int i = 1; i <= N; i++) {
        po[i] = (po[i - 1] * 2) % mod;
    }
}
void solve(){
    precompute();
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n];
        for(int i=0;i<n;i++) cin>>b[i];
        int mx_ina=0, mx_inb=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]>a[mx_ina]) mx_ina = i;
            if(b[i]>b[mx_inb]) mx_inb = i;
            int inl=mx_ina;
            int inr=i-mx_ina;
            int inll=i-mx_inb;
            int inrr= mx_inb;
            int temp=0;
            if(max(a[inl],b[inr])>max(a[inll],b[inrr])){
               temp= (po[a[inl]]+po[b[inr]])% mod;
            }
            else if(max(a[inl],b[inr])<max(a[inll],b[inrr])){
                temp= (po[a[inll]]+po[b[inrr]])% mod;
            }
            else if(min(a[inl],b[inr])>min(a[inll],b[inrr])){
                temp= (po[a[inl]]+po[b[inr]])% mod;
            }
            else {
                temp= (po[a[inll]]+po[b[inrr]])% mod;
            }
            ans.push_back(temp);
            
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
            if(i!= n-1) cout<<" ";
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