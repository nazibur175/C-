#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)

void solve() {
    map<tuple<int,int,int>, int> m;
    m[{0,0,0}] = 0;
    m[{0,0,1}] = 1;
    m[{0,1,0}] = 0;
    m[{0,1,1}] = -1;
    m[{1,0,0}] = -1;
    m[{1,0,1}] = 1;
    m[{1,1,0}] = 1;
    m[{1,1,1}] = 0;

    test {
        int a, b, d;
        cin >> a >> b >> d;
        int ans = 0;
        bool pos = true;

        for (int i = 0; i < 64; i++) {
            int bitA =(a>>i) & 1;  
            int bitB =(b>>i) & 1; 
            int bitD =(d>>i) & 1; 

            tuple<int,int,int> key = {bitA, bitB, bitD};

            if (m.find(key) != m.end()) {
                int res=m[key];
                if (res==-1) {
                    pos=false;  
                    break;
                }
                ans |=(res << i); 
            } else {
                pos = false; 
                break;
            }
        }
        if (pos) 
            cout<<ans<<endl;
        else 
            cout<<-1<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
