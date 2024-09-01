#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>va,vb;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            va.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vb.push_back(x);
        }
        vector<int>mn,mx;
        int l=0,h=n-1;
        for(int i=n-1;i>=0;i--)
        {
            int in=lower_bound(vb.begin(),vb.end(),va[i])-vb.begin();
            int p=vb[in]-va[i];
            int q=vb[h]-va[i];
            mn.push_back(p);
            mx.push_back(q);
            if(in==i)
                h=i-1;
        }
        reverse(mn.begin(),mn.end());
        reverse(mx.begin(),mx.end());
        for(auto x:mn) 
            cout<<x<<" ";
        cout<<endl;
        for(auto x:mx)
            cout<<x<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}