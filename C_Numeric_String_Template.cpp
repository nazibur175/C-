#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        vector<string>v;
        for(int i=0;i<m;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(auto x:v){
            if(n!=x.size()){
                cout<<"NO"<<endl;
                continue;
            }
            map<char,int>char_int;
            map<int,char>int_char;
            int f=1;
            for(int i=0;i<n;i++){
                if(char_int.find(x[i]) == char_int.end() && int_char.find(a[i]) == int_char.end()){
                char_int[x[i]]=a[i];
                int_char[a[i]]=x[i];
                }
                else if(char_int[x[i]]==a[i] && int_char[a[i]]==x[i]) continue;
                else {
                    f=0;
                    break;
                }
            }
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}