#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int x=a[n-1];
        //cout<<x<<endl;
        int cnt=0;
        vector<int>v;

        for(int i=0;i<n;i++){
           cnt=x-a[i];
           //cout<<x<<" "<<a[i]<<endl;
           if(cnt)
           v.push_back(cnt);
        }
        
        sort(v.rbegin(),v.rend());
        
        // for(auto x:v) cout<<x<<" ";
        // cout<<endl;
        //15 12 5

         int ans=0;
         for(int i=0;i<v.size();i++){
                 ans+=v[i];
            //cout<<ans<<" -- "<<i<<" "<<v[i]<<endl;
            int have=0;
            int temp=v[i];
            if(i+m>=v.size()) break;

            for(int j=0;j<m;j++){
                have += temp-v[i+j];
                v[i+j]=0;
            }
            i=i+m-1;
            //cout<<i<<" -- ";
            //cout<<have<<endl;
            while (have>0 && v.size())
            {
                if(v.back()==0) {
                    v.pop_back();
                    continue;
                }
                //cout<<v.back()<<" "<<have<<endl;
                int val=v.back();
                v[v.size()-1]=max(0LL,v.back()-have);
                //cout<<v.back()<<endl;
                have=max(0LL,have-val);
                if(v.back()==0) v.pop_back();
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