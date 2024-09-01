#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int start=0;
        int end=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) {
                start++;
            }
            else break;
        }
        for(int j=n-1;j>0;j--){
            if(a[j]==a[j-1]) {
                end++;
            }
            else break;
        }
        if(start) start++;
        if(end) end++;
        if(start==n || n==1) cout<<0<<endl;
        else if(a[0]==a[n-1]){
            if(start==0) start++;
            if(end==0) end++;
            cout<<n-(start+end)<<endl;
        }
        else if(start==0 && end==0) cout<<n-1<<endl;
        else {
            cout<<n-(max(start,end))<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}