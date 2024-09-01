#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>pre;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            pre.push_back(sum);
        }
        int q;
        cin>>q;
        while (q--)
        {
            int l,u;
            cin>>l>>u;
            l--;
            int val=0;
            if(l==0){
                val=u;
            }
            else
                { 
                    val = pre[l-1]+u;
                }
            auto ind = lower_bound(pre.begin(),pre.end(),val);
            if(ind==pre.end()) cout<<n<<" ";
            else{
                int in=ind-pre.begin();
                if(pre[in]>val) in--;
                if(a[in+1] <= (2*(val-pre[in]))) in++;
                
                l++,in++;
                cout<<max(l,in)<<" ";
            }
            
        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}