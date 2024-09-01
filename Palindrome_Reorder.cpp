#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        string s1;
        string s2;
        char ch;
        int c=0;
        for(auto x:m){
            if(x.second%2==0){
                for(int i=1;i<=(x.second/2);i++){
                    s1.push_back(x.first);
                    s2.push_back(x.first);
                }
            }
            else {
                for(int i=1;i<=(x.second/2);i++){
                    s1.push_back(x.first);
                    s2.push_back(x.first);
                }
                ch=x.first;
                c++;
                if(c>1) break;
            }
        }
        if(c>1){
            cout<<"NO SOLUTION"<<endl;
        }
        else if(c==1){
            s1.push_back(ch);
            reverse(s2.begin(),s2.end());
            s1=s1+s2;
            cout<<s1<<endl;
        }
        else {
            reverse(s2.begin(),s2.end());
            s1=s1+s2;
            cout<<s1<<endl;
        }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}