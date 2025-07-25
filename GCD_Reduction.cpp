#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal(const vector<int>&arr) {
    int x=arr[0];
    int y=arr[1];
    for(int i=2;i<arr.size();i++){
        if(gcd(x,arr[i]) <= gcd(y,arr[i])) {
            x = y;
        }
        y = arr[i];
    }
    return x;
}
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        if(n==2){
            cout<<-1<<"\n";
            continue;
        }
        int gc=gcd(x,y);
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(i==x || i==y) continue;
            if(gcd(i,x)>gc){
                ans=i;
                gc=gcd(i,x);
                //break;
            }
        }
        if(ans==-1){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> arr;
        for(int i=1;i<=n;i++){
            if(i==ans || i==x || i==y) continue;
            arr.push_back(i);
        }
        // cout<<ans<<" ";
        // cout<<y<<" "<<x<<"\n";
        arr.push_back(ans);
        arr.push_back(y);
        arr.push_back(x);
        int res = cal(arr);
        if(res!=y){
            for(int i=0;i<arr.size();i++){
                cout<<arr[i];
                if(i!=arr.size()-1) cout<<" ";
            }
            cout<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}