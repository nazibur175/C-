#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++)cin>>d[i];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int temp=0;
        int f=1;
        int a[n];
        for(int i=0;i<n;i++){
            if(d[i]==1){
                temp++;
            }
            a[i]= v[i].second-temp;
            if(a[i]<0){
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<"-1"<<endl;
            continue;
        }
        
        int arr[n+1]={0};
        int mn=1e9;
        for(int i=n-1;i>=0;i--){
            mn=min(mn,a[i]);
            arr[i]=mn;
        }
        int ans[n];
        temp=0;
        for(int i=0;i<n;i++){
            if(d[i]!=-1){
                ans[i]=d[i];
                continue;
            }
            if(temp+1<=arr[i]){
                ans[i]=1;
                temp++;
            }
            else {
                ans[i]=0;
            }
        }
        temp=0;
        for(int i=0;i<n;i++){
            temp+=ans[i];
            if(v[i].first<=temp && v[i].second>=temp){
                continue;
            }
            else {
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<"-1"<<endl;
        }
        else {
            for(int i=0;i<n;i++){
                cout<<ans[i];
                if(i!=n-1) cout<<" ";
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