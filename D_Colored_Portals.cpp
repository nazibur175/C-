#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e15;
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        map<string,vector<int>>m;
        map<int,string>temp;
        vector<string>v;
        v.push_back("BG");
        v.push_back("BR");
        v.push_back("BY");
        v.push_back("GR");
        v.push_back("GY");
        v.push_back("RY");

        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            temp[i]=s;
            m[s].push_back(i);
        }
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            int xx=min(x,y);
            int yy=max(x,y);
            string a=temp[xx];
            string b=temp[yy];
            //cout<<a<<endl;
            //cout<<b<<endl;
            set<char>s;
            s.insert(a[0]);
            s.insert(a[1]);
            s.insert(b[0]);
            s.insert(b[1]);
           
            if(s.size()!=4){
                cout<<abs(x-y)<<endl;
                
            } 
            else{
                //cout<<"OK"<<endl;
                int leftin=0;
                int rightin=n+1;
                for(int i=0;i<6;i++){
                    //cout<<i<<endl;
                     if(v[i]==a || v[i]==b || m[v[i]].size()==0){
                        // cout<<"ok"<<endl;
                         continue;
                     }
                     int l=-1;
                     int r=-1;
                     int in=-1;
                     auto it = lower_bound(m[v[i]].begin(),m[v[i]].end(),yy);
                     if(it!=m[v[i]].end()){
                         in = it - m[v[i]].begin();
                         r=m[v[i]][in];
                     }
                     if(in==-1){
                     l=m[v[i]].back();
                     }
                     else {
                         if((in-1)>=0)
                         l=m[v[i]][in-1];
                     }

                      if(l!=-1) leftin = max(leftin,l);
                      if(r!=-1) rightin = min(rightin,r);
                    
                 }
                 int ans = N;
                 if(leftin !=0){
                     int val = abs(xx-leftin) + abs(leftin-yy);
                     ans=min(ans,val);
                 }
                 if(rightin!=n+1){
                     int val = abs(xx-rightin) + abs(rightin-yy);
                     ans=min(ans,val);
                }
                 if(ans==N)
                 cout<<"-1"<<endl;
                 else 
                 cout<<ans<<endl;
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