#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
int n=0;
int dp[25][210][210];
int cal(vector<int>&v,int pos,int w1, int w2){
    
     if(pos>=n){
         if(w1==w2) return 1;
         else return 0;
    }
    if(dp[pos][w1][w2]!=-1) return dp[pos][w1][w2];

    int res=0;
    res=res | cal(v,pos+1,w1+v[pos],w2);
    res=res | cal(v,pos+1,w1,w2+v[pos]);
    return dp[pos][w1][w2]=res;
    return res;
    
}
void solve(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        memset(dp,-1,sizeof(dp));
        vector<int>v;
        string s;
        getline(cin,s);
        s+=" ";
        n=s.size();
        int num=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                v.push_back(num);
                num=0;
                continue;
            }
            num=(num*10)+(s[i]-'0');
        }
         n=v.size();

         int temp=cal(v,0,0,0);
         if(temp)
           cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}