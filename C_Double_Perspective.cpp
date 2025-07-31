#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)

bool cmp(const tuple<int,int,int> &u, const tuple<int,int,int> &v) {
    int au = get<1>(u) - get<0>(u);
    int av = get<1>(v) - get<0>(v);
    return au > av;
}
void solve(){   
    test {
        int n;
        cin >> n;
        vector<tuple<int,int,int>> seg(n);
        for(int i =0;i<n;i++){
            int a,b;
            cin >>a>>b;
            seg[i] =make_tuple(a,b,i+1);
        }
        sort(seg.begin(), seg.end(), cmp);
        
        vector<tuple<int,int,int>> ans;
        for(auto &s:seg){
            int a =get<0>(s);
            int b = get<1>(s);
            int inside =0;
            for(auto &t : ans){
                int c = get<0>(t);
                int d = get<1>(t);
                if(c <= a && b <= d){
                    inside = 1;
                    break;
                }
            }
            if(!inside){
                ans.push_back(s);
            }
        }

        cout <<ans.size()<<"\n";
        for(auto &s:ans){
            cout <<get<2>(s)<<" ";
        }
        cout<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
