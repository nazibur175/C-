#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                cnt++;
                a.push_back(a[0]);
                sort(a.begin(),a.end());
                a.pop_back();
            }
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