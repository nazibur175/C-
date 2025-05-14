#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        int diff=a[n-1]-a[0];
        if((diff-1)>k){
            cout<<"Jerry"<<endl;
        }
        else if(diff>k && mp[a[n-1]]>1){
            cout<<"Jerry"<<endl;
        }
        else if(sum%2==0){
            cout<<"Jerry"<<endl;
        }
        else {
            cout<<"Tom"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}