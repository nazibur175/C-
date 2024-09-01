#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,c,d;
        cin>>n>>c>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int l=0;
        int r=d;
        while (l<r)
        {
            int mid=l+(r-l+1)/2;
            int total=0;
            for(int i=0;i<d;i++){
                if(i%mid<n) total+=a[i%mid];
            }
            if(total>=c) l=mid;
            else r=mid-1;
        }
        if(l==0) cout<<"Impossible"<<endl;
        else if(l==d) cout<<"Infinity"<<endl;
        else cout<<l-1<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}