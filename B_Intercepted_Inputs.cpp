#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int k;
        cin>>k;
        int a[k];
        map<int,int>m;
        for(int i=0;i<k;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int cnt=k-2;
        for(int i=0;i<k;i++){
            if(cnt%a[i]==0){
                int need=cnt/a[i];
                if((m[need] && need!=a[i]) || (m[need]>1)){
                    cout<<a[i]<<" "<<need<<endl;
                    break;
                }
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}