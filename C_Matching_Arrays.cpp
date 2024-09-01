#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<pair<int,int>>va;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            va.push_back({val,i});
        }
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(va.begin(),va.end());
        sort(b,b+n);
        vector<int>m(n);
        int j=x;
        for(int i=0;i<=n-1-x;i++){
            m[va[i].second]=b[j];
            j++;
        }
        j=0;
        for(int i=n-1-x+1;i<=n-1;i++){
            m[va[i].second]=b[j];
            j++;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(va[i].first>m[va[i].second]) c++;
        }
        if(c!=x)
            cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<m[i]<<" ";
            }
            cout<<endl;
        }
        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}