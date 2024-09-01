#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int n;
void divisors(int n, auto &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
                
            else
               divisor.push_back(i);
        }
    }
}
bool ok(int k){
    if(n%k!=0) return 0;
    int rep=n/k;
    string temp="";
    for(int i=0;i<k;i++){
        temp+=s[i];
    }
    string ss="";
    for(int i=0;i<rep;i++){
        ss+=temp;
    }
    temp="";
    for(int i=n-k;i<n;i++){
        temp+=s[i];
    }
    string sss="";
    for(int i=0;i<rep;i++){
        sss+=temp;
    }

    //ss // sss
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]!=ss[i]) cnt++;
    }
    if(cnt<=1) return 1;
    cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]!=sss[i]) cnt++;
    }
    if(cnt<=1) return 1;
    return 0;
}
void solve(){
    test{
        cin>>n;
        cin>>s;
        vector<int>div;
        divisors(n,div);
        sort(div.begin(),div.end());
        for(auto x:div){
            if(ok(x)){
                cout<<x<<endl;
                break;
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