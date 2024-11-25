#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    double x;
    vector<double>v;
    while (cin>>x)
    {
        v.push_back(x);
    }

    //cout<<n<<endl;
    double amount = v.back();
    v.pop_back();
    int n=v.size();
    sort(v.begin(),v.end());
   
    int in=0;
    double avg = amount/n;
    //cout<<avg<<endl;
    while (avg>=v[in]){
        amount-=v[in];
        in++;
        n--;
        avg = amount/n;
    }
    cout<<fixed<<setprecision(2)<<avg<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}