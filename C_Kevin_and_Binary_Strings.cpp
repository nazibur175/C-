#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                x=i+1;
                break;
            }
        }
        int len=n-x+1;
        int cnt=1;
        if(x==0){
            cout<<1<<" "<<1<<" "<<1<<" "<<n<<endl;
            continue;
        }
        for(int i=x;i<n;i++){
            if(s[i]=='0'){
                cnt++;
            }
            else break;
        }
        x=max(1ll,x-cnt);
        cout<<1<<" "<<n<<" "<<x<<" "<<x+len-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}