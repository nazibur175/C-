#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int c=0;
        int flag = 0;
        for(int i=0;i<10;i++){
            if(x.find(s)!=string::npos){
                cout<<c<<endl;
                flag = 1;
                break;
            }
            else {
                x+=x;
                c++;
            }
        }
        if(flag==0) cout<<"-1"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}