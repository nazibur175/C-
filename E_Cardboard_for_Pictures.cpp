#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int l=1;
        int r=1e9;
        while (l<=r)
        {
            int mid= (l+r)/2;
            int t_area=0;
            for(int i=0;i<n;i++){
                t_area+= (a[i]+2*mid)*(a[i]+2*mid);
                if(t_area>c) break;
            }
            if(t_area==c) {
                cout<<mid<<endl;
                break;
            }
            else if(t_area>c) r=mid;
            else l=mid;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}