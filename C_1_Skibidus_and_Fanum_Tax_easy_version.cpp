#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        sort(b.begin(),b.end());
        int f=1;
        for(int i=0;i<n;i++){
            int val=0;
            if(i>0) val=a[i-1];
            auto it = lower_bound(b.begin(),b.end(),(val + a[i]));
            if(it==b.end()) continue;
            int in = it-b.begin();
            
            int temp = b[in] - a[i];
            if(temp<a[i] && temp>=a[i-1]){
                a[i]=temp;
            }
        }

        for(int i=0;i<n;i++){
            // if(a[i]>a[i+1]){
            //     f=0;
            //     break;
            // }
            cout<<a[i]<<" ";
        }
        cout<<endl;
        //if(f) cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}