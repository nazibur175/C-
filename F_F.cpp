#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=4e6;
int a[N];
void solve(){
    int r=4e5+9;
    int l=r+1;

    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==0){
            int d,x;
            cin>>d>>x;
            if(d==0){
                // d=0 insert begin
                // if(l!=r){
                //     l--;
                // }
                l--;
                a[l]=x;
            }
            else {
                // d=1 insert last
                // if(l!=r){
                //     r++;
                // }
                r++;
                a[r]=x;
            }

        }
        else if(type==1){
            int p;
            cin>>p;
            cout<<a[l+p]<<endl;
            //print p index
        }
        else {
            int d;
            cin>>d;
            if(d==0){
                // samne remov
                l++;
            }
            else {
                // piche remov
                r--;
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