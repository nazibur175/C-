#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,c;
        cin>>n>>c;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            a[i]=a[i]+i;
        }
        sort(a.begin()+1,a.end());
        int sum=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(sum+a[i]<=c){
                sum+=a[i];
                cnt++;
            }
            else break;
        }
        cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}