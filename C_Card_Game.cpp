#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<int,int>a;
        map<int,int>b;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a[i+1]=1;
            }
            else b[i+1]=1;
        }
        if(a[1]&&a[n]) cout<<"Alice"<<endl;
        else if(b[1] && b[n]) cout<<"Bob"<<endl;
        else if(a[1] && b[n]){
            if(b.size()>2) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
        else if(a[n] && b[1]){
            if(a[n-1]) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}