#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    map<int,int>ans;
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(mp[a-arr[i]]){
            ans[arr[i]]=1;
            ans[a-arr[i]]=1;
        }
        else {
            temp.push_back(arr[i]);
        }
    }
    int f=1;
    for(int i=0;i<temp.size();i++){
        if(mp[b-temp[i]]==0){
            f=0;
            break;
        }
        if(ans[b-temp[i]]!=1){
            ans[temp[i]]=2;
            ans[b-temp[i]]=2;
        }
        else {
            ans[temp[i]]=2;
            ans[b-temp[i]]=2;
            ans[a-(b-temp[i])]=0;
            temp.push_back(a-(b-temp[i]));
        }
    }
    if(f==0){
        cout<<"NO"<<endl;
        return;
    }
    else {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[arr[i]]-1<<" ";
        }
        cout<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}