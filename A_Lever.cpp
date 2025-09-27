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
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        //sort(b.begin(),b.end());
        int ans=0;
        while(1){
            int step1=0;
            ans++;
            for(int i=0;i<n;i++){
                if(a[i]>b[i]){
                    step1=1;
                    a[i]--;
                    break;
                }
            }
            if(step1==0) break;
            for(int i=0;i<n;i++){
                if(a[i]<b[i]){
                    a[i]++;
                    //ans++;
                    break;
                }
            }

        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}