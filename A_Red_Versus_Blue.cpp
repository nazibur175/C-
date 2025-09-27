#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,a,b;
        cin>>n>>a>>b;
        
        string ans;
        //cout<<"Here\n";
        int temp = a/(b+1);
        int ex=a%(b+1);
        while(ans.size()<n){
            for(int i=0;i<temp;i++){
                ans.push_back('R');
            }
            if(ex>0){
             ans.push_back('R');
             ex--;
            }

            if(ans.size()>=n) 
                break;

            ans.push_back('B');
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