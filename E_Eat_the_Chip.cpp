#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int h,w,xa,ya,xb,yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        if(xa>=xb){
            cout<<"Draw"<<endl;
            continue;
        }
        int dx=xb-xa;
        if(dx%2){
            //Ans: alice or draw
            int left_alice=max(1LL,ya-((dx+1)/2));
            int left_bob=max(1LL,yb-(dx/2));
            int right_alice=min(w,ya+((dx+1)/2));
            int right_bob=min(w,yb+(dx/2));
            //alice -> beshi left and beshi right
            if(left_alice<=left_bob && right_alice>=right_bob)
                cout<<"Alice"<<endl;
            else cout<<"Draw"<<endl;
        }
        else {
            //Ans: bob or draw
            int left_alice=max(1LL,ya-(dx/2));
            int left_bob=max(1LL,yb-(dx/2));
            int right_alice=min(w,ya+(dx/2));
            int right_bob=min(w,yb+(dx/2));
            //bob -> beshi left and beshi right
            if(left_alice>=left_bob && right_alice<=right_bob)
                cout<<"Bob"<<endl;
            else cout<<"Draw"<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}