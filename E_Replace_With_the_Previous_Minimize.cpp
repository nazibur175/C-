#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int check[27];
        iota(check,check+27,0);
        for(int i=0;i<n;i++){
            int val = s[i]-'a';
            int temp=val;
            while (check[temp] && k) 
                temp--,k--;
            for(int j=0;j<=val;j++) 
                check[j]=min(check[j],check[temp]);
        }
        for(int i=0;i<n;i++){
            printf("%c", ('a' + check[s[i]-'a']));
        }
        printf("\n");
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}