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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        deque<int>d;
        for(int i=0;i<n;i++){
            int l=0;
            int r=i+1;
            int mid=0;
            while (l<=r)
            {
                mid=(l+r)/2;
                if(a[i+1-mid]>=mid) l=mid+1;
                else r=mid-1;
                //else break;
            }
            v.push_back(l-1);
            
        }
        for(auto x:v){
            cout<<x<<" ";
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