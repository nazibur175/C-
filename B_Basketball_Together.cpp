#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans = 0;
    int i=0;
    int j = n-1;
    int temp = v[j];
    while(i<=j){
        if(temp>x){
            ans++;
            j--;
            temp=v[j];
        }
        else {
            temp += v[j];
            i++;
        }
    }
    cout<<ans<<"\n";

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}