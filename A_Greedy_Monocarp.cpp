#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]>k){
                break;
            }
            sum+=a[i];
        }
        cout<<k-sum<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}