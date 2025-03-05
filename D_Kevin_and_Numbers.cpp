#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// setu 
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        multiset<int>s;
        multiset<int>ss;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            ss.insert(x);
        }
        int f=1;
        
        while (1)
        {
            if(s.size() < ss.size()){
                f=0;
                break;
            }
            if(s.empty() && ss.empty()) break;
            if((ss.empty() && !s.empty())){
                f=0;
                break;
            }

            if(*s.rbegin()>*ss.rbegin()){
                f=0;
                break;
            }
            else if(*s.rbegin()==*ss.rbegin()){
                s.erase(s.find(*s.rbegin()));
                ss.erase(ss.find(*ss.rbegin()));
            }
            else{

                int x=*ss.rbegin();
                ss.erase(ss.find(x));
                if(x==1 || x==0){
                    f=0;
                    break;
                }
                ss.insert((x+1)/2);
                ss.insert(x/2);
            }
            
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}