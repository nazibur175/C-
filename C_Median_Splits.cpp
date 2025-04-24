#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans1=0;
        int cnt=0;
        int ele=0;
        int pre[n+1]={0};
        int suff[n+1]={0};
        for(int i=0;i<n;i++){
            ele++;
            int mid= (ele+1)/2;
            if(v[i]<=k){
                cnt++;
            }
            if(cnt>=mid){
                ans1++;
                ele++;
                pre[i]=ans1;
                mid= (ele+1)/2;
                if(i+1<n && v[i+1]>k && cnt>=mid){
                    i++;
                    pre[i]=ans1;
                }
                cnt=0;
                ele=0;
            }
            pre[i]=ans1;
            
        }
        int ans2=0;
        cnt=0;
        ele=0;
        for(int i=n-1;i>=0;i--){
            ele++;
            int mid= (ele+1)/2;
            if(v[i]<=k){
                cnt++;
            }
            if(cnt>=mid){
                ans2++;
                suff[i]=ans2;
                ele++;
                mid= (ele+1)/2;
                if(i-1>=0 && v[i-1]>k && cnt>=mid){
                    i--;
                    suff[i]=ans2;
                }
                cnt=0;
                ele=0;
            }
            suff[i]=ans2;
            
        }
        int temp=0;
        for(int i=0;i<n-1;i++){
            if(pre[i]>0 && suff[i+1]>0){
                temp=1;
                break;
            }
            //cout<<pre[i]<<" ";
        }
        //cout<<endl;
        // for(int i=0;i<n-1;i++){
        //     cout<<suff[i]<<" ";
        // }
        // cout<<endl;

        if(max(ans1,ans2)>=2) cout<<"YES"<<endl;
        else if(temp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}