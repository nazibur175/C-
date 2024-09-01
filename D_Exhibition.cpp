#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        vector<int>v[n];
        map<int,int>mm;
        for(int ii=0;ii<n;ii++)
        {
            int m;
            cin>>m;
            for(int i=1;i<=m;i++){
                int x;
                cin>>x;
                v[ii].push_back(x);
                mm[x]++;
            }
        }
        long double c=0;
        for(auto x:mm){
            if(x.second==1) c++;
        }
        vector<long double>ans;
        for(int i=0;i<n;i++)
        {
            long double cc=0LL;
            for(auto x:v[i]){
                if(mm[x]==1){
                    cc++;
                }
            }
            //cout<<cc<<endl;
            long double aa= ((cc*100.00)/(c*1.00));
            ans.push_back(aa);
        }
        cout<<"Case "<<tt<<": ";
        int nn=ans.size();
        for(int i=0;i<nn;i++){
            cout<<fixed<<setprecision(6)<<ans[i];
            if(i==n-1)
            cout<<"%";
            else
            cout<<"% ";

        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}