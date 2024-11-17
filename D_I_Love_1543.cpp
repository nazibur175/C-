#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int top=0, btm=n-1;
        int left=0, right=m-1;
        int ans=0;
        while (top<=btm && left<=right) {
            string s;
            for (int i=left; i<=right; i++) {
                s+=a[top][i];
            }
            top++; 
            for (int i=top; i<=btm; i++) {
                s+=a[i][right];
            }
            right--; 
            if (top<=btm) {
                for (int i=right; i>=left;i--) {
                    s+=a[btm][i];
                }
                btm--; 
            }
            if (left<=right) {
                for (int i=btm; i>=top;i--) {
                    s+=a[i][left];
                }
                left++; 
            }
            for(int i=0;i<min((int)s.size(),3ll);i++){
                s+=s[i];
            }
            //cout<<s<<endl;
            for(int i=0;i<s.size()-3;i++){
                if(s[i]=='1' && s[i+1]=='5' && s[i+2]=='4' && s[i+3]=='3'){
                    ans++;
                }
            }
        }
            cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}