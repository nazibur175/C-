#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
map<int,int>m;
map<int,int>changed;
int n,k,q;
int check(int x){
    if(changed[x]){
        return m[x];
    }
    else return x<=k;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        m.clear();
        changed.clear();
        cin>>n>>k>>q;
        int hole=1;
        cout<<"Case "<<tc<<":"<<endl;
        while(q--){
            int x,y;
            cin>>x>>y;
            // For x
            if(x==1){
                if(check(x+1)){
                    hole++;
                }
                    changed[x]=1;
                    m[x]=0;

            }
            else if(x==n){
                if(check(x-1)){
                    hole++;
                }
                    changed[x]=1;
                    m[x]=0;
                
            }
            else if(check(x+1)==0 && check(x-1)==0){
                hole--;
                changed[x]=1;
                m[x]=0;
            }
            else{
                if(check(x+1) && check(x-1)){
                    hole++;
                }
                changed[x]=1;
                m[x]=0;
            }

        // for y
        if(y==1){
            if(check(y+1)){
                hole--;
            }
            changed[y]=1;
            m[y]=1;
        }
        else if(y==n){
            if(check(y-1)){
                hole--;
            }
            changed[y]=1;
            m[y]=1;
        }
        else {
            if(check(y-1)==0 && check(y+1)==0){
                hole++;
            }
            else if(check(y-1)==1 && check(y+1)==1){
                hole--;
            }
            changed[y]=1;
            m[y]=1;
        }
        cout<<hole<<endl;


        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}