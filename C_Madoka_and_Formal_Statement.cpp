#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        a.push_back(a[0]);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        b.push_back(b[0]);
        int f=1;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                f=0;
                break;
            }
            else if(a[i]==b[i] || b[i]<=b[i+1]+1) continue;
            else {
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}