#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
    
        int vis[n+9]={0};
        int pre=a[0];

        vector<int>v;
        v.push_back(a[0]);
        vis[0]=1;

        int in=1;
        int c=0;

        for(int i=1;i<n;i++){
            while ((in-1)<n && pre>=a[in] )
            {
                in++;
            }
            if(in<n && pre<a[in] && !vis[in]){
                v.push_back(a[in]);
                pre+=a[in];
                vis[in]=1;
                in++;
                c++;
            }
        } 
        //cout<<v.size()<<endl;
        for(int i=1;i<n;i++){
            if(vis[i]==0) {
                v.push_back(a[i]);
                vis[i]=1;
            }
        }
        //cout<<v.size()<<endl;
        //cout<<"-----"<<endl;

         cout<<(n-1)-c<<endl;
         for(auto x:v) cout<<x<<" ";
         cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}