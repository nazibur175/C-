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
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int f=0;
        for(int i=0;i<n;i++){
            int x=a[i];
            if(m[2*x]==0){
                f=1;
                cout<<x<<" "<<x<<endl;
                break;
            }
        }
        if(f==0){
            cout<<-1<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}