#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mxkombe=0;
        int inl=1;
        int inr=1;
        for(int i=0;i<n;i++){
            int barbe=0;
            int kombe=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]) barbe++;
                if(a[j]<a[i]) kombe++;
                int invkombe = kombe-barbe;
                if(invkombe>mxkombe){
                    mxkombe=invkombe;
                    inl=i+1;
                    inr=j+1;
                }
            }
        }
        cout<<inl<<" "<<inr<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}