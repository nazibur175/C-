#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v;
        vector<int>vv;
        //unordered_set<int>s;
        int total_sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            total_sum+=x;
            v.push_back(x);
        }

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            total_sum+=x;
            vv.push_back(x);
        }

        if(total_sum%n) {
            cout<<"-1"<<endl;
            continue;
        }
        int need=total_sum/n;
        vector<int>ans;
        
        int check[n+9]={0};
        int f=0;
        for(int i=0;i<n;i++){
            f=0;
            int had = need - v[i];
            for(int i=0;i<n;i++){
                if(vv[i]==had && check[i]==0) {
                    ans.push_back(vv[i]);
                    check[i]=1;
                    f=1;
                    break;
                }
            }
            if(f==0) break;
        }
        if(f==0){
            cout<<"-1"<<endl;
            continue;
        }
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}