#include<bits/stdc++.h>
using namespace std;

#define print(a) for(auto x:a)cout<<x<<' ';cout<<'\n';
#define debug(x) cout<<#x<<" "<<x<<endl
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a.size())
#define int   long long int
#define endl '\n'
#define ar array
 
const int M = 1e9 + 7;
const int N = 2e5 + 10;

int l[N], r[N], n;

bool ok(int k){
    int l1 = 0, r1 = 0;

    for(int i = 0; i <n; i++){
        r1 = r1 + k;
        l1 = l1 - k;
        if(r1 < l[i] || l1 > r[i])return false;
        l1 = max(l1,l[i]);
        r1 = min(r[i],r1);
       // cout<<l1<<' '<<r1<<endl;
    }
    return true;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }

    int l1 = 0, r1 = M+N;
  
    while(r1-l1 > 0){
        int m = (l1+r1)/2;
        if(ok(m))r1 = m;
        else l1 = m+1;
    }
    cout<<l1<<endl;
}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}

