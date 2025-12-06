#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int big=0;
        int small=0;
        for(int i=0;i<n;i++){
            vector<int>temp;
            temp.push_back(big - a[i]);
            temp.push_back(b[i] - big);

            temp.push_back(small - a[i]);
            temp.push_back(b[i] - small);
            sort(temp.begin(),temp.end());
            big=temp.back();
            small=temp.front();
        }
        // cout<<big<<" "<<small<<"\n";
        // cout<<max(big,small)<<"\n";
        cout<<big<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}