#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int l=1;
    int r=1e6;
    while (l<=r)
    {
        int mid = (l+r)/2;
        cout<<mid<<endl;
        cout<<flush;

        string s;
        cin>>s;
        if(s=="<"){
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<"! "<<l-1<<endl;
    cout<<flush;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}