#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int fre[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            fre[a[i]]++;
        }
        int f=1;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(sum==0 && fre[i]==0) continue;
            int temp = fre[i]-2;
            sum+=temp;
            if(sum<0){
                f=0;
                break;
            }
        }
        if(sum%2) f=0;
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}