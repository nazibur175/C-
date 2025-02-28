#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)

void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> stc(n);
        map<int,int> freq;
        for (int i = 0; i < n; i++){
            cin >> stc[i];
            freq[stc[i]]++;
        }
        bool f = false;
        for(auto &p : freq){
            if(p.second >= 4){
                cout << p.first << " " << p.first << " " << p.first << " " << p.first << "\n";
                f = true;
                break;
            }
        }
        if(f) continue;
        vector<int> cand;
        for(auto &p : freq){
            if(p.second >= 2)
                cand.push_back(p.first);
        }
        sort(cand.begin(), cand.end());
        if(cand.size() >= 2){
            int x = cand[0], y = cand[1];
            cout << y << " " << y << " " << x << " " << x << "\n";
            continue;
        }
        if(cand.size() == 1) {
            int L=freq[cand[0]];
            vector<int>single;
            if(L==3) single.push_back(cand[0]);
            for(int i=0;i<n;i++){
                if(stc[i]==cand[0]) continue;
                single.push_back(stc[i]);
            }
            sort(single.begin(),single.end());
            int f=0;
            for(int i=0;i<single.size()-1;i++){
                if(single[i+1]-single[i]<2*cand[0]){
                    f=1;
                    cout<<cand[0]<<" "<<cand[0]<<" "<<single[i]<<" "<<single[i+1]<<endl;
                    break;
                }
            }
            if(f==0) cout<<-1<<endl;
            continue;
        }
        cout << -1 << "\n";
    }
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
