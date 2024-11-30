#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int temp = a[0];
    vector<int> v;
    for(int i=1;i<n;i++){
        a[i] = a[i] - temp;
        if(a[i]!=0) v.push_back(a[i]);
    }
    n=v.size();
    int ans = v[0];
    for(int i=1;i<n;i++){
        ans = __gcd(ans,v[i]);
    }
    vector<int> res;
    for(auto i:v){
        res.push_back(i/ans);
    }
    int sum = 0;
    for(auto i:res){
        sum+=i;
    }
    int need = sum/(res.size());
    int ans1 = 0;
    for(auto i:res){
        ans1+=abs(i-need);
    }
    cout<<ans1<<endl;
    
    
    
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}