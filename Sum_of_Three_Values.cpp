#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        v.push_back({val,i});
    }
    sort(v.begin(),v.end());
    for(int ii=0;ii<n;ii++){
        int i=0;
        int j=n-1;
        int target=x-v[ii].first;
        while (i!=j)
        {
            if(ii!=i && ii!=j && (v[i].first+v[j].first)==target){
                cout<<v[ii].second<<" "<<v[i].second<<" "<<v[j].second<<endl;
                return 0;
            }
            else if((v[i].first+v[j].first)<target) i++;
            else j--;
        }
        
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}