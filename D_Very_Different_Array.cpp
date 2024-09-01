#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;

        deque<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.push_back(x);
        }
        deque<int>ss;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            ss.push_back(x);
        }
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        // for(auto x:s) cout<<x<<" ";
        // cout<<endl;
        // for(auto x:ss) cout<<x<<" ";
        // cout<<endl;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp1= abs(s.front()-ss.front());
            int temp2= abs(s.front()-ss.back());
            int tempa=max(temp1,temp2);

            int temp11= abs(s.back()-ss.front());
            int temp22= abs(s.back()-ss.back());
            int tempaa=max(temp11,temp22);

            if(tempa>=tempaa){
                if(temp1>=temp2){
                    ans+=temp1;
                    s.pop_front();
                    ss.pop_front();
                }
                else{
                    ans+=temp2;
                    s.pop_front();
                    ss.pop_back();
                }
            }
            else {
                if(temp11>=temp22){
                    ans+=temp11;
                    s.pop_back();
                    ss.pop_front();
                }
                else {
                    ans+=temp22;
                    s.pop_back();
                    ss.pop_back();
                }

            }
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