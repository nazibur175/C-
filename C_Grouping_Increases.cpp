#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v1;
        v1.push_back(a[0]);
        vector<int>v2;
        v2.push_back(N);
        int c=0;
        for(int i=1;i<n;i++){
            if(a[i]<=v1.back()) v1.push_back(a[i]);
            else if(a[i]<=v2.back()) v2.push_back(a[i]);
            else {
                v1.push_back(a[i]);
                c++;
            }
            if(v1.back()>v2.back()) swap(v1.back(),v2.back());
        }
        //for(auto x:v1) cout<<x<<" ";
        // int c=0;
        // for(int i=1;i<v1.size();i++){
        //     if(v1[i-1]<v1[i]) c++;
        // }
        // for(int i=1;i<v2.size();i++){
        //     if(v2[i-1]<v2[i]) c++;
        // }
        cout<<c<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}