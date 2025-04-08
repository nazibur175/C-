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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        map<pair<int,int>,int>m;
        int cnt_equal=0;
        for(int i=1;i<=n;i++){
            if(a[i]==b[i]){
                cnt_equal++;
            }
            m[{a[i],b[i]}]=i;
        }
        if(n%2==0 && cnt_equal){
            cout<<"-1"<<endl;
            continue;
        }
        if(n%2==1 && cnt_equal!=1){
            cout<<"-1"<<endl;
            continue;
        }
        int f=1;
        for(int i=1;i<=n;i++){
            if(m[{a[i],b[i]}]==0 || m[{b[i],a[i]}]==0){ 
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<"-1"<<endl;
            continue;
        }
        vector<pair<int,int>>ans;
        if(n%2==1){
            int half=(n+1)/2;
            for(int i=1;i<=n;i++){
                if(a[i]==b[i] && i!=half){
                    ans.push_back({i,half});
                    m[{a[i],b[i]}]=half;
                    m[{a[half],b[half]}]=i;
                    swap(a[i],a[half]);
                    swap(b[i],b[half]);
                    break;
                }
            }
        }

        // for(int i=1;i<=n;i++){
        //     cout<<a[i]<<" "<<b[i]<<" ";
        //     cout<<m[{a[i],b[i]}]<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;

        for(int i=1;i<=n/2;i++){
            int oposite=n-i+1;
            //cerr<<i<<" "<<oposite<<endl;
            int cur_in=m[{b[i],a[i]}];
            if(cur_in!=oposite){
                ans.push_back({cur_in,oposite});
                m[{b[i],a[i]}]=oposite;
                m[{a[oposite],b[oposite]}]=cur_in;
                swap(a[cur_in],a[oposite]);
                swap(b[cur_in],b[oposite]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}