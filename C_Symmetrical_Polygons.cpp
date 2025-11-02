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
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>od;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int sum=0;
        vector<int>v2;
        int mx=0;
        for(auto x:mp){
            if(x.second%2){
                od.push_back(x.first);
                if(x.second-1){
                    sum+=(x.first*(x.second-1));
                    mx=max(mx,x.first);
                }
            }
            else{
                sum+=(x.first*x.second);
                mx=max(mx,x.first);
            }
        }
        sort(od.begin(),od.end());
        // ekta nibo odd theke
        int ans=0;
        if(sum>(2*mx))ans=sum;
        
        int i=0;
        while(i<od.size() && (sum+od[i])>(2*max(mx,od[i])) ){
            ans=max(ans,sum+od[i]);
            i++;
        }

        //2 ta nibo odd theke
        //i=0;
        //cout<<sum<<endl;
        // while((i+1)<od.size() && (sum+od[i]+od[i+1])>(2*max(mx,od[i+1])) ){
        //     ans=max(ans,sum+od[i]+od[i+1]);
        //     i+=1;
        // }
        for(i=0;i+1<od.size();i++){
            if((sum+od[i]+od[i+1])>(2*max(mx,od[i+1])) ){
                ans=max(ans,sum+od[i]+od[i+1]);
            }
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