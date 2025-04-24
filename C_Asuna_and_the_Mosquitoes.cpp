#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        if(even.size()==0){
            cout<<odd[odd.size()-1]<<endl;
        }
        else if(odd.size()==0){
            cout<<even[even.size()-1]<<endl;
        }
        else{
            int ans=0;
            for(int i=0;i<even.size();i++){
                ans+=even[i];
            }
            ans+=odd[odd.size()-1];
            for(int i=0;i<odd.size()-1;i++){
                ans+=odd[i]-1;
            }
            cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}