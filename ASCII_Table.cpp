#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        char x,y;
        cin>>x>>y;
        int xx=(int)x;
        int yy=(int)y;
        int len= 126-33+1;
        cout<<"Case "<<tt<<": "<<"\n";
        for(int row=1;row<=len;row++){
            int f=0;
            int col= (len+row-1)/row;
            //cout<<row<<" "<<col<<endl;
            if(xx%row==yy%row){
                cout<<row<<" "<<col<<"\n";
            }
        }
        cout<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}