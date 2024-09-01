#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        long long a, b, r;
         cin >> a >> b >> r;
         if (a < b) {
             swap(a, b);
         }
        int ans1 =a-b;
        int x = 0;
        int ans2=ans1;
        // 011111000
        // 100000000
        for (int i =60; i>=0; i--) {
           int temp = (1LL<<i);
           // a=1
           // b=0
           // r
            if ((a&temp) && !(b&temp) && ((temp|x) <=r)) {
                if(ans1>=2*temp){
                    a^= temp;  
                    b|= temp; 
                    //r -= temp;
                    x|=temp;
                    ans1-=2*(temp);
                }
                else ans2=min(ans2,2*temp-ans1);   
            }
        }
        cout<<min(ans1,ans2)<<endl;

        //if(a>b)swap(a,b);

        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}