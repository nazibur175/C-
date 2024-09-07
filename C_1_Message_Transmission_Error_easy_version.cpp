#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int>f(n+1);
    for (int i=1, j=0; i<n; i++) {
        while (j > 0 && s[i] != s[j]) {
            j = f[j];
            //cout<<""
        }
        j += (s[i] == s[j]);
        f[i + 1] = j;
        //cout<<"I= "<<i<<"    J= "<< j<<endl;
        //cout<<"F"<<i+1<<"= "<<j<<endl;
    }
    
    if (f[n] > n / 2) {
        cout << "YES\n";
        cout << s.substr(0, f[n]) << "\n";
    } else {
        cout << "NO\n";
    }
    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}