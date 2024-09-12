#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l=1;
        int r=999;
        while (r-l>2)
        {
            int a= l+(r-l)/3;
            int b= r-(r-l)/3;
            cout<<"? "<<a<<" "<<b<<endl;
            cout<<flush;
            int area;
            cin>>area;
            int real_area=a*b;
            if(area==real_area){
                l=b;
            }
            else if(area==(a+1)*(b+1)){
                r=a;
            }
            else l=a,r=b;
        }
            if(r-l==2){
                cout<<"? "<<1<<" "<<l+1<<endl;
                cout<<flush;
                int area;
                cin>>area;
                if(area ==l+1){
                     l=l+1;
                }
                else {
                    r=l+1;
                }
            }
        cout<<"! "<<r<<endl;
        cout<<flush;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}