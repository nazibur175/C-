#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string insert(string t,int in){
        string x="";
    for(int i=0;i<in;i++){
        x+=t[i];
    }
    x+="01";
    for(int i=in;i<t.size();i++){
        x+=t[i];
    }
    return x;
}
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int j=n-1;
        vector<int>ans;
        int c=0;
        while (i<j)
        {
            if(s[i]!=s[j]) {
                i++;
                j--;
            }
            else if(s[i]=='1' && s[j]=='1'){
                s=insert(s,i);
                ans.push_back(i);
                i++;
                j++;
                c++;
            }
            else if(s[i]=='0' && s[j]=='0'){
                s=insert(s,j+1);
                ans.push_back(j+1);
                i++;
                j++;
                c++;
            }
            if(c>300) break;

        }
        if(s.size()%2==1)
            cout<<"-1"<<endl;
        else if(c>300){
            cout<<"-1"<<endl;
        }
        else {
            cout<<ans.size()<<endl;
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}