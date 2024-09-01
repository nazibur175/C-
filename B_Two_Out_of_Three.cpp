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
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int c=0;
        for(auto x:m){
            if(x.second>=2) c++;
        }
        if(c<2) cout<<-1<<endl;
        else {
            int vis[1000]={0};
            int f=0;
            for(int i=0;i<n;i++){
                //int a=0;
                if(m[a[i]]>=2 && vis[a[i]]==0 && f==0){
                    cout<<1<<" ";
                    vis[a[i]]=1;
                    f=a[i];
                }
                else if(m[a[i]]>=2 && vis[a[i]]==1 && f==a[i]){
                    cout<<2<<" ";
                }
                else if(m[a[i]]>=2 && vis[a[i]]==0){
                    cout<<1<<" ";
                    vis[a[i]]=1;
                }
                else if(m[a[i]]>=2 && vis[a[i]]){
                    cout<<3<<" ";
                }
                else {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}