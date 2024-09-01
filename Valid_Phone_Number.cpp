#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        string temp="";
        int n=s.size();
        for(int i=0;i<5;i++){
            temp+=s[i];
        }
        if(n!=14) cout<<"NO"<<endl;
        else if(temp=="+8801"){
            if(s[5]=='2' || s[5]=='3' || s[5]=='4' || s[5]=='5' || s[5]=='6' || s[5]=='7' || s[5]=='8' || s[5]=='9'){
                int flag=1;
                for(int i=6;i<n;i++){
                    if(s[i]=='+'){
                        flag=0;
                        break;
                    }
                }
                if(flag)
                cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}