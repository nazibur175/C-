#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,l,t;
        cin>>n>>m>>l>>t;
        int availabe_2tl= (n-1)/7 +1;
        int left=1;
        int right =n;
        int ans=0;
        while (left<=right)
        {
            int mid=(left+right)/2;
            int x = mid*l + min(mid*2 , availabe_2tl)*t;
            if(x>=m){
                right=mid-1;
                ans=mid;
            } 
            else left=mid+1;
        }
        cout<<n-ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}