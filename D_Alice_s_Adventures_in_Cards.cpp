#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        int c[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        for(int i=1;i<=n;i++){
            cin>>c[i];
        }
        vector<pair<char,int>>ans(n+1);
        int mxa=a[1];
        int mxb=b[1];
        int mxc=c[1];
        int mx_ina=1;
        int mx_inb=1;
        int mx_inc=1;
        
        for(int i=2;i<=n;i++){
            int f=0;
            if(a[i]<mxa){
                ans[i]={'q',mx_ina};
                f=1;
            }
           else if(b[i]<mxb){
                ans[i]={'k',mx_inb};
                f=1;
            }
            else if(c[i]<mxc){
                ans[i]={'j',mx_inc};
                f=1;
            }
            if(f){
                if(a[i]>mxa){
                    mxa=a[i];
                    mx_ina=i;
                }
                if(b[i]>mxb){
                    mxb=b[i];
                    mx_inb=i;
                }
                if(c[i]>mxc){
                    mxc=c[i];
                    mx_inc=i;
                }
            }
        }
        if(!ans[n].first){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            vector<pair<char,int>>ans1;
            int temp=n;
            while(temp>1){
                ans1.push_back({ans[temp].first,temp});
                temp=ans[temp].second;
            }
            reverse(ans1.begin(),ans1.end());
            cout<<"YES"<<endl;
            cout<<ans1.size()<<endl;
            for(auto i:ans1){
                cout<<i.first<<" "<<i.second<<endl;
            }
            
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}