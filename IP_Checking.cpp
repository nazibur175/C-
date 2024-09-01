#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int bin_dec(string s){
    int c=0;
    int ans=0;
    for(int i=s.size()-1;i>=0;i--){
        ans+= (pow(2,c)*(s[i]-'0'));
        c++;
    }
    return ans;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int a=0,b=0,c=0,d=0;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cin.ignore();
        string s1,s2,s3,s4;
        getline(cin,s1,'.');
        getline(cin,s2,'.');
        getline(cin,s3,'.');
        getline(cin,s4,'\n');
        //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;

        cout<<"Case "<<tc<<": ";
        int aa=bin_dec(s1);
        int bb=bin_dec(s2);
        int cc=bin_dec(s3);
        int dd=bin_dec(s4);

        if(a==aa & b==bb && c==cc && d==dd){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}