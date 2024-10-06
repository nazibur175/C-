#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        char ch[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }

        int ans=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                if(ch[i][j]=='.'){
                    if(j-1>=0 && j+1<n && ch[i][j-1]=='x' && ch[i][j+1]=='x'){
                        int op= (i+1)%2;
                        if(j-1>=0 && j+1<n && ch[op][j]=='.' && ch[op][j-1]=='.' && ch[op][j+1]=='.'){
                            ans++;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;


        }
    }


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}