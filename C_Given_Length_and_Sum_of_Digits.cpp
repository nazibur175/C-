#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007

void solve(){
    int n,s;
    cin>>n>>s;
    int n9=s/9;
    int c9=n9;
    int other=s%9;
    int ot=0;
    if(other) ot=1;
    vector<int> ma;
    vector<int> mi;
    if(n==1 && s==0) cout<<"0 0"<<endl;
    else if(s==0){
        cout<<"-1 -1"<<endl;
    }
    else if(c9+ot<=n){
        while (c9--)
        {
            ma.push_back(9);
        }
        if(ot)
            ma.push_back(other);
        c9=n9;
        if(other==1){
            mi.push_back(other);
            while (c9--)
            {
                mi.push_back(9);
            }
        }
        else if(other==0){
            if((c9+1)<n)
            {
                mi.push_back(1);
                mi.push_back(8);
                c9--;
            }
            while (c9--)
            {
                mi.push_back(9);
            }
        }
        else {
            if(c9+ot<n){
                mi.push_back(other-1);
                mi.push_back(1);
            }
            else
                mi.push_back(other);
            while (c9--)
            {
                mi.push_back(9);
            }
        }

        string smax = "";
        string smin = "";

        if(ma.size()<=n && mi.size()<=n){
            for(int i=0; i<ma.size(); i++){
                smax += to_string(ma[i]);
            }
            for(int i=ma.size(); i<n; i++){
                smax += '0';
            }

            sort(mi.begin(), mi.end());
            smin += to_string(mi[0]);
            for(int i=mi.size(); i<n; i++){
                smin += '0';
            }
            for(int i=1; i<mi.size(); i++){
                smin += to_string(mi[i]);
            }
            
            if(smin.length() == n && smax.length() == n)
                cout << smin << " " << smax << endl;
            else
                cout << "-1 -1" << endl;
        }
        else 
            cout << "-1 -1" << endl;
    }
    else 
        cout << "-1 -1" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
