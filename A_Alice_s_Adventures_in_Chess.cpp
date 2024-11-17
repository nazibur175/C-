#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        string temp;
        for(int i=0;i<100;i++){
            temp+=s;
        }
        int a=0;
        int b=0;
        int ans=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='N'){
                b++;
            }
            else if(temp[i]=='S'){
                b--;
            }
            else if(temp[i]=='E'){
                a++;
            }
            else if(temp[i]=='W'){
                a--;
            }
            if(a==x && b==y){
                ans=1;
                break;
            }
            
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}