#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int x[q+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        int cur=INT_MAX;
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            if(x<cur) {
                v.push_back(x);
                cur=x;
            }
        }

        for(auto val:v){
            for(int i=0;i<n;i++){
                int num=pow(2,val);
                if(a[i]%num==0){
                    a[i]=a[i]+pow(2,(val-1));
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
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