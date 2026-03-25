#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        int a[n+2];
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int>v1,v2;
        deque<int>d;
        int mn=n+100;
        for(int i=1;i<=n;i++){
            if(i>=x+1 && i<=y){
               d.push_back(a[i]);
               mn=min(mn,a[i]);
            }
            else v1.push_back(a[i]);
        }
        // v2 = range 
        while (d.front()!=mn)
        {
            int temp = d.front();
            d.pop_front();
            d.push_back(temp);
        }
        vector<int>ans;
        if(v1.size()==0){
            while (d.size())
            {
                ans.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for(int i=0;i<v1.size();i++){
                if(d.size()==0){
                    ans.push_back(v1[i]);
                }
                else if(v1[i]<mn){
                    ans.push_back(v1[i]);
                }
                else{
                    while (d.size()){
                        ans.push_back(d.front());
                        d.pop_front();
                    }
                    ans.push_back(v1[i]);
                }
            }
            while (d.size()){
                        ans.push_back(d.front());
                        d.pop_front();
            }
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;

        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}