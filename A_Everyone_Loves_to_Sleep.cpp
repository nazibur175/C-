#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,h,m;
        cin>>n>>h>>m;
        int time =h*60 + m;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(x*60 + y);
        }
        sort(v.begin(),v.end());
        if(v.back()<time){
            int temp = 1440 - time + v.front();
            cout<<temp/60 << " " << temp%60<<endl;
        }
        else {
            for(int i=0;i<v.size();i++){
                if(v[i]>=time){
                    int temp = v[i]-time;
                    cout<<temp/60 << " " << temp%60<<endl;
                    break;
                }
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