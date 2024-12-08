#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int sum=0;
        int cnt2=0,cnt3=0;
        for(int i=0;i<s.size();i++){
            int dig = s[i]-'0';
            sum+=dig;
            if(dig==2){
                cnt2++;
            }
            else if(dig==3){
                cnt3++;
            }
        }
        if(sum%9==0){
            cout<<"YES"<<endl;
        }
        else {
            int f=0;
            for(int i=0;i<=cnt2;i++){
                for(int j=0;j<=cnt3;j++){
                    int temp = i*2+j*6;
                    if((temp+sum)%9==0){
                        f=1;
                        break;
                    }
                }
            }
            if(f){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}