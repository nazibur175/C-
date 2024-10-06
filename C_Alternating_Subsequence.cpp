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
        vector<int>ans;
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        set<int>s;
        s.insert(a[0]);
        for(int i=1;i<n;i++){
            if((a[i]<0 && (*s.rbegin())<0)  || (a[i]>0 && *s.rbegin()>0)){
                s.insert(a[i]);
            }
            else {
                ans.push_back(*(s.rbegin()));
                s.clear();
                s.insert(a[i]);
            }
        }
        if(s.size()) ans.push_back(*(s.rbegin()));
        int sum=0;
        for(auto x:ans) sum+=x;
        
        cout<<sum<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}