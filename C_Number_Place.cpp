#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int n=9;
void solve(){
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int yes=1;
    for(int i=0;i<n;i++){
        set<int>s;
        for(int j=0;j<n;j++){
            s.insert(a[i][j]);
        }
        if(s.size()!=9){
            yes=0;
            break;
        }
    }
    for(int i=0;i<n;i++){
        set<int>s;
        for(int j=0;j<n;j++){
            s.insert(a[j][i]);
        }
        if(s.size()!=9){
            yes=0;
            break;
        }
    }

    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            set<int>s;
            for(int ii=0;ii<3;ii++){
                for(int jj=0;jj<3;jj++){
                    s.insert(a[i+ii][j+jj]);
                }
            }
            if(s.size()!=9){
                yes=0;
                break;
            }
        }
    }


    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}