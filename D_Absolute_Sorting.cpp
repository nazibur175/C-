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

        int x=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=ceil((a[i]+a[i+1])/(2*1.0));
                x=max(x,temp);
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(abs(a[i]-x));
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<x<<endl;
        }
        else cout<<-1<<endl;
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}