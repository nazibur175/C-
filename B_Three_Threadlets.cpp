#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        vector<int>v;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int c=0;
        bool flag = 1;
        for(int i=1;i<3;i++){
            if(v[i]%v[0]==0){
                c+=v[i]/v[0]-1;
            }
            else {
                flag = 0;
                break;
            }
        }
       
        if(c<=3 && flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}