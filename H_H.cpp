#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,l,r;
        cin>>n>>l>>r;
        multiset<int>s;
        multiset<int>ss;
        for(int i=1;i<=l;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=1;i<=r;i++){
            int x;
            cin>>x;
            ss.insert(x);
        }
        vector<int>temp;
        for(auto x:s){
            if(ss.find(x)!=ss.end()){
                //s.erase(s.find(x));
                temp.push_back(x);
                ss.erase(ss.find(x));
            }
        }
        for(auto x:temp){
            if(s.find(x)!=s.end()){
                s.erase(s.find(x));
            }
        }
        int ans=0;
        if(s.size()==0 && ss.size()==0){
            ans=0;
        }
        else if(s.size()==ss.size()){
            ans+=s.size();
        }
        else{
            if(s.size()>ss.size()){
                vector<int>v;
                for(auto x:s) v.push_back(x);
                for(int i=0;i<(v.size()-1);i++){
                    if(v[i]==v[i+1] && (s.size()-2)>=ss.size()){
                        ans+=1;
                        if(s.find(v[i])!=s.end())
                        s.erase(s.find(v[i]));
                        if(s.find(v[i])!=s.end())
                        s.erase(s.find(v[i]));
                        i++;
                    }
                }
            }
            else {
                vector<int>v;
                for(auto x:ss) v.push_back(x);
                for(int i=0;i<(v.size()-1);i++){
                    if(v[i]==v[i+1] && (ss.size()-2)>=s.size()){
                        ans+=1;
                        if(ss.find(v[i])!=ss.end())
                        ss.erase(ss.find(v[i]));
                        if(ss.find(v[i])!=ss.end())
                        ss.erase(ss.find(v[i]));
                        i++;
                    }
                }
            }
            int xx=0;
            int yy=0;
            xx=s.size();
            yy=ss.size();
            ans+=abs(xx-yy);
            ans+=min(xx,yy);
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}