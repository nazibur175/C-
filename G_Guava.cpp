#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool cmp(string &a,string &b) {
    return a.length() > b.length();
}
void solve(){
    test{
        string str;
        cin>>str;
        int n;
        cin>>n;
        vector<string>s;
        for(int i=0;i<n;i++){
            string  temp;
            cin>>temp;
            s.push_back(temp);
        }
        sort(s.begin(),s.end(),cmp);
        //for(auto x:s) cout<<x<<endl;
        //cout<<endl;
        int strl= str.size();
        int a[strl+100]={0};
        vector<pair<int,int>>ans;
        for(int ii=0;ii<n;ii++){
            int len = s[ii].size();
            //cout<<len<<endl;
            for(int i=0;(i+len)<strl;i++){
                //cout<<str.substr(i,len)<<endl;
                string temp ="";
                for(int in=i;in<(i+len);in++){
                    temp+=str[in];
                }
             if(temp==s[ii]){
                     int f=0;
                     for(int j=i;j<(i+len);j++){
                        if(a[j]==0){
                            a[j]++;
                            f=1;
                        }
                    }
                    // if(f){
                    //     //sth in
                    //     ans.push_back({ii+1 , i+1});
                    //     ii+=len-1;
                    // }
                }
            }
        }
        int f=1;
        for(int i=0;i<strl;i++){
            if(a[i]==0){
                f=0;
            }
        }
        if(f==0) cout<<-1<<endl;
        // else {
        //     cout<<ans.size()<<endl;
        //     for(auto xx:ans) cout<<xx.first<<" "<<xx.second<<endl;
        // }
     }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}