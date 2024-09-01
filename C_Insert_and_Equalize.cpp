#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            m[x]++;
        }
        if(n==1) {
            cout<<1<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int gc=0;
        for(int i=1;i<n;i++){
            gc=__gcd(gc,v[i]-v[i-1]);
        }
        //cout<<gc<<endl;
        int ans=0;
        int x=v[n-1];
        while (1)
        {
            if(m[x]==false){
                v.push_back(x);
                break;
            }
             x-=gc;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            ans+=(v.back()-v[i])/gc;
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