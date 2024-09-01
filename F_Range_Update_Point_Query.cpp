#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int digsum(int n){
    int sum=0;
    while (n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
    
}
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        vector<int>v(n+9);
        set<int>s;
        for(int i=1;i<=n;i++) {
            cin>>v[i];
            if(v[i]>9) s.insert(i);
        }
        int check[n+9]={0};
        while (q--)
        {
            int x;
            cin>>x;
            if(x==1){
                int l,r;
                cin>>l>>r;
                int start = l;
                while (!s.empty())
                {
                    auto it=s.lower_bound(start);
                    if(it==s.end() || *it>r) break;
                    v[*it]=digsum(v[*it]);

                    start= *it +1;
                    if(v[*it]<=9) s.erase(it);
                }

            }
            else {
                int in;
                cin>>in;
                cout<<v[in]<<endl;
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