#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        string temp;
        int n=s.size();
        temp=s[0];
        int x=1;
        for(int i=1;i<n;i++){
            if(s[i]=='0') temp+=s[i];
            else {
                x=i;
                break;
            }
        }
        string temp2="";
        for(int i=x;i<n;i++){
            temp2+=s[i];
        }
        int a = stoi(temp);
        int b = stoi(temp2);
        if(b>a && temp2[0]!='0')
        cout<<temp<<" "<<temp2<<endl;
        else cout<<-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}