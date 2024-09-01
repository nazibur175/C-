#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=0;i<n;i++) cin>>a[i];
        map<char,int>m;
        for(int i=0;i<26;i++){
            m['a'+i]=0;
        }
        for(int i=0;i<n;i++){
             for(int j=0;j<26;j++){
                if(m['a'+j]==a[i]) {
                    char ch='a'+j;
                    cout<<ch;
                    m[ch]++;
                    break;
                }
             }
        }
        cout<<endl;

        //for(auto x:m) cout<< x.first<<" "<<x.second<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}