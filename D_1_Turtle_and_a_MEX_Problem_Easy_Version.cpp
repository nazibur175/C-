#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        set<int>s[n+5];
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            for(int j=0;j<l;j++){
                int x;
                cin>>x;
                s[i].insert(x);
            }
        }
        //for(auto x:s[0]) cout<<x<<" ";
        //cout<<endl;
        vector<int>v[n+5];
        for(int i=0;i<n;i++){
           
            int val=0;

            while (v[i].size()<=2)
            {
                auto it = s[i].find(val);
                if(it==s[i].end()){
                    v[i].push_back(val);
                }
                    val++;
            }
           // sort(v[i].begin(),v[i].end());
            
        }
        

        vector<int>vv;
        for(int i=0;i<n;i++){
            int x = v[i][0];
            int y= v[i][1];
            vv.push_back(x);
            vv.push_back(y);
        }
        sort(vv.rbegin(),vv.rend());
        //for(auto x: vv) cout<<x<<" ";
        //cout<<endl;
        int second_max = vv[0];
        int ans=0;
        //cout<<second_max<<endl;
        if(second_max>=m){
            ans = (m+1)*second_max;
        }
        else{
            ans = (second_max+1)*second_max;
            ans += (m*(m+1))/2 - (second_max*(second_max+1)/2);
        }
        cout<<ans<<endl;
        //cout<<"Ok"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}