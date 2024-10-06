#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    bool check[n+5][100000+9];
    memset(check,0,sizeof(check));
    
    int sum=0;
    check[0][0]=1;
    for(int i=1;i<=n;i++){
        sum+=a[i];
        for(int j=0;j<=sum;j++){
            if(check[i-1][j])
                check[i][j]=true;
            else if((j-a[i])>=0 && check[i-1][j-a[i]]==true){
                check[i][j]=true;
            }
    }
    }
    int c=0;
    vector<int>v;
    for(int i=1;i<=100000;i++){
        if(check[n][i]==true) 
            v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}