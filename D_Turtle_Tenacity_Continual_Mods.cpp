#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// int gcd(int a, int b)
// {  
// return b==0 ? a : gcd(b, a%b) ;   
// }
void solve(){
    test{
        int n, i;
        cin >> n;
        int gc = 0;
        map<int,int> fre;
        for(i = 0; i < n; i++) {
            int num;
            cin>>num;
            gc=gcd(num, gc);
            fre[num]++;
        }
        if (fre[gc]>1) {
            cout<<"NO"<<endl;
        } else {
            cout <<"YES"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}