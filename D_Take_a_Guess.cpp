#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int query(int i,int j){
    cout<<"and "<<i<<" "<<j<<endl;
    cout<<flush;
    int x;
    cin>>x;
   

    cout<<"or "<<i<<" "<<j<<endl;
    cout<<flush;
    int y;
    cin>>y;
    
    return x+y;

}

void solve(){
    int n,k;
    cin>>n>>k;
   
    int apb= query(1,2);
    int bpc= query(2,3);
    int apc= query(1,3);
    // a+b+b+c-a-c = 2b
    int b= (apb+bpc-apc)/2;
    int a= apb-b;
    int c= bpc-b;
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    for(int i=4;i<=n;i++){
        int temp = query(i-1,i);
        ans.push_back(temp-ans.back());
    }
    sort(ans.begin(),ans.end());
    cout<<"finish "<<ans[k-1]<<endl;
    cout<<flush;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}