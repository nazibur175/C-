#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#include<bits/stdc++.h>

#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // vector<int>v;
        // int less[n]={0};
        // for(int i=0;i<n;i++){
        //     sort(v.begin(),v.end());
        //     if(v.size()==0){
        //         v.push_back(a[i]);
        //         less[i]=0;
        //     }
        //     else{
        //         int x = lower_bound(v.begin(),v.end(),a[i])-v.begin();
        //         less[i]=x;
        //         v.push_back(a[i]);
        //     }
        // }

        // for(int i=0;i<n;i++){
        //     cout<<less[i]<<" ";
        // }
        // cout<<endl;


        int greater[n]={0};
        vector<int>vv;
        for(int i=n-1;i>=0;i--){
            sort(vv.begin(),vv.end());
            if(vv.size()==0){
                vv.push_back(a[i]);
                greater[i]=0;
            }
            else{
                int x = upper_bound(vv.begin(),vv.end(),a[i])-vv.begin();
                greater[i]=vv.size()-x;
                vv.push_back(a[i]);
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<greater[i]<<" ";
        // }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,i+greater[i]);
        }
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}