#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a,b,c,q;
bool isOk(int val)
{
    bool f = true;
    vector<int> dig;
    int sum = 0;
    while (val)
    {
        int x=val % 10;
        dig.push_back(x);
        sum +=x;
        val /=10;
        if (x!=a && x!=b && x!=c)
        {
            f = false;
            break;
        }
    }
    int ff =0;
    int cnt =dig.size();
    for(auto x:dig)
    {
        if(x*(cnt-1) == (sum-x))
        {
            ff = 1;
        }
    }
    if (dig.size() == 1)
        f = 0;
    return ff & f;
}
int cal(string& R,int pos,bool tight,bool leading_zero){
    if(pos>R.size()){
        return isOk();
    }
}
void solve(){
    
    cin>>a>>b>>c>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        string L=to_string(l);
        string R=to_string(r);
        int ans = cal(R,)
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}